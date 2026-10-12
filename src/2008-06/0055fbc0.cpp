// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
struct Input;
struct Output;
struct BasicIOS;

extern void (__thiscall *stringDefault)(String *);
extern void (__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);
extern String &(__thiscall *stringAssign)(String *, const String &);
extern void (__thiscall *outputConstruct)(Output *, const char *, int, int, int);
extern void (__thiscall *outputDestroy)(Output *);
extern Output &(__thiscall *outputWrite)(Output *, const char *, int);
extern void (__thiscall *iosClear)(BasicIOS *, int, bool);
extern Input &(__thiscall *inputSeek)(Input *, long, int);
extern Input &(__thiscall *inputRead)(Input *, char *, int);
extern int (__stdcall *PathFileExistsA)(const char *);

struct String {
    unsigned long allocator;
    union {
        char small[16];
        char *large;
    } storage;
    unsigned long length;
    unsigned long capacity;

    String();
    String(const String &);
    ~String();
    String &operator=(const String &);
};

inline String::String()
{
    stringDefault(this);
}

inline String::String(const String &other)
{
    stringCopy(this, other);
}

inline String::~String()
{
    stringDestroy(this);
}

inline String &String::operator=(const String &other)
{
    return stringAssign(this, other);
}

extern unsigned long __cdecl getLocalScope();

struct Result {
    String text;
    unsigned long scope;

    Result();
    Result(const String &, unsigned long);
    Result &operator=(const Result &);
};

inline Result::Result() : scope(getLocalScope())
{
}

inline Result::Result(const String &value, unsigned long id)
    : text(value), scope(id)
{
}

inline Result &Result::operator=(const Result &other)
{
    text = other.text;
    scope = other.scope;
    return *this;
}

struct BasicIOS {
    void clear(int, bool);
};

inline void BasicIOS::clear(int state, bool exceptions)
{
    iosClear(this, state, exceptions);
}

struct Input {
    int *virtualBaseTable;
    int count;

    Input &seekg(long, int);
    Input &read(char *, int);
};

inline Input &Input::seekg(long offset, int origin)
{
    return inputSeek(this, offset, origin);
}

inline Input &Input::read(char *buffer, int size)
{
    return inputRead(this, buffer, size);
}

struct Output {
    char storage[136];

    Output(const char *, int, int, int);
    ~Output();
    Output &write(const char *, int);
};

inline Output::Output(const char *path, int mode, int protection, int flag)
{
    outputConstruct(this, path, mode, protection, flag);
}

inline Output::~Output()
{
    outputDestroy(this);
}

inline Output &Output::write(const char *buffer, int size)
{
    return outputWrite(this, buffer, size);
}

struct Provider {
    virtual void reserved0() = 0;
    virtual void reserved1() = 0;
    virtual void open(Input *) = 0;
    virtual String name() = 0;
};

extern Provider *__cdecl createProvider();
extern void __cdecl releaseMemory(void *);
extern void __cdecl releaseOwner(void *, int);

struct Owner {
    Provider *pointer;

    Owner(Provider *);
    ~Owner();
};

inline Owner::Owner(Provider *value) : pointer(value)
{
}

inline Owner::~Owner()
{
    releaseMemory(pointer);
    releaseOwner(this, 1);
}

struct Allocator {
    virtual void reserved() = 0;
    virtual void release(void *) = 0;
};

struct StringHeader {
    Allocator *allocator;
    long length;
    long capacity;
    volatile long references;
};

struct Path {
    char *data;

    Path(const char *) throw();
    ~Path();
};

inline Path::~Path()
{
    StringHeader *header = reinterpret_cast<StringHeader *>(data - 16);
    if (_InterlockedExchangeAdd(&header->references, -1) - 1 <= 0)
        header->allocator->release(header);
}

Result __cdecl reconstruct(Input *input, unsigned long scope)
{
    Result result;
    {
        Owner owner(createProvider());
        Provider *provider = owner.pointer;
        provider->open(input);
        result = Result(provider->name(), scope);
    }

    const char *filename;
    if (result.text.capacity >= 16)
        filename = result.text.storage.large;
    else
        filename = result.text.storage.small;

    Path path(filename);
    if (!PathFileExistsA(path.data)) {
        Output output(path.data, 0x22, 0x40, 1);
        BasicIOS *ios = reinterpret_cast<BasicIOS *>(
            reinterpret_cast<char *>(input) + input->virtualBaseTable[1]);
        ios->clear(0, false);
        input->seekg(0, 0);
        char buffer[1024];
        do {
            input->read(buffer, 1024);
            output.write(buffer, input->count);
        } while (input->count > 0);
    }
    return result;
}
