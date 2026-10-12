// from server: 98% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


extern "C" int (__cdecl* _mbsnbcpy_s)(
    unsigned char*, unsigned int, const unsigned char*, unsigned int);
extern "C" int (__cdecl* _mbscmp)(
    const unsigned char*, const unsigned char*);
extern "C" void __cdecl checkError(int);

extern const unsigned char* prefix;

struct Header;

struct Allocator
{
    virtual void unused() = 0;
    virtual void release(Header*) = 0;
};

struct Header
{
    Allocator* allocator;
    unsigned int size;
    unsigned int capacity;
    volatile long references;
};

struct TemporaryString
{
    unsigned char* data;
    TemporaryString(const TemporaryString&);
};

struct String
{
    unsigned char* data;

    String(const char*);
    void normalize();
    TemporaryString substring(int);

    ~String()
    {
        Header* h = reinterpret_cast<Header*>(data - 16);
        if (_InterlockedDecrement(&h->references) - 1 <= 0)
            h->allocator->release(h);
    }
};

struct VCContent_CComAggObject
{
    unsigned char data[0x1226];
    unsigned short port;
    int kind;
    int flags;
    int field1230;
    int field1234;
    int field1238;
    int field123c;
    int field1240;

    void Init();
    void f(int, unsigned int);
};

bool verifyAddress(int value)
{
    VCContent_CComAggObject content;
    content.Init();
    content.kind = 2;
    content.flags = 4;
    content.port = 80;
    checkError(_mbsnbcpy_s(content.data, 33, prefix, 4));
    content.f(value, 0);

    if (content.kind != 0 &&
        (content.kind <= 1 || content.kind > 3))
        return false;

    String host(reinterpret_cast<const char*>(content.data + 0x21));
    host.normalize();

    TemporaryString tail = host.substring(10);
    bool matched = _mbscmp(
        tail.data,
        reinterpret_cast<const unsigned char*>("roblox.com")) == 0;

    Header* h = reinterpret_cast<Header*>(tail.data - 16);
    if (_InterlockedDecrement(&h->references) - 1 <= 0)
        h->allocator->release(h);

    if (matched)
        return true;
    return false;
}
