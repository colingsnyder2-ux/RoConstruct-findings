// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Header;

struct Manager {
    virtual void reserved();
    virtual void release(Header *);
};

struct Header {
    Manager *manager;
    int length;
    int capacity;
    volatile long references;
};

extern Header *__cdecl acquire(Header *);
extern "C" int (__stdcall *PathFileExistsA)(const char *);

struct Path {
    char *data;

    Path(const Path &);
    ~Path();
    int append(const char *);
};

extern Path __cdecl makePath(int);

inline Path::Path(const Path &other)
{
    data = reinterpret_cast<char *>(
        acquire(reinterpret_cast<Header *>(other.data) - 1)) + 16;
}

inline Path::~Path()
{
    Header *header = reinterpret_cast<Header *>(data) - 1;
    if (_InterlockedExchangeAdd(&header->references, -1) - 1 <= 0)
        header->manager->release(header);
}

struct String;
extern String *(__thiscall *constructString)(String *, const char *);
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned char allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    ~String();
    const char *c_str() const;
};

inline String::String(const char *text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

inline const char *String::c_str() const
{
    const char *text = pointer;
    if (capacity < 16)
        text = buffer;
    return text;
}

String resolvePath(String input)
{
    Path base = makePath(1);
    Path path(base);
    path.append(input.c_str());
    if (!PathFileExistsA(path.data))
        return String(">Authoring");
    return String(path.data);
}
