// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String
{
    unsigned int allocator;
    union
    {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();
    const char* c_str() const;
};

inline const char* String::c_str() const
{
    return capacity >= 16 ? storage.pointer : storage.buffer;
}

struct StringData;

struct StringManager
{
    virtual void unused() = 0;
    virtual void release(StringData*) = 0;
};

struct StringData
{
    StringManager* manager;
    int length;
    int capacity;
    volatile long references;
};

struct LocalString
{
    char* pointer;

    LocalString(const char*);
    ~LocalString();
};

inline LocalString::~LocalString()
{
    StringData* data = reinterpret_cast<StringData*>(pointer) - 1;
    if (_InterlockedExchangeAdd(&data->references, -1) + -1 <= 0)
        data->manager->release(data);
}

extern String getBase();
extern String operator+(const String&, const char*);
extern "C" int __stdcall PathFileExistsA(const char*);

String func_00560460(String source)
{
    const char* suffix = source.c_str();
    suffix += 11;
    LocalString path((getBase() + suffix).c_str());

    if (!PathFileExistsA(path.pointer))
        return String(">Authoring");

    return String(path.pointer);
}
