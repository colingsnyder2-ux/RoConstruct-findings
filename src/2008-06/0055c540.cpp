// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef int (__stdcall *AcquireFunction)(
    unsigned long*, const char*, const char*, unsigned long, unsigned long);
typedef int (__stdcall *HashFunction)(
    unsigned long, unsigned long, unsigned long, unsigned long, unsigned long*);
typedef unsigned long (__stdcall *ErrorFunction)();

extern AcquireFunction CryptAcquireContextA;
extern HashFunction CryptCreateHash;
extern ErrorFunction GetLastError;

struct Text;
typedef Text* (__thiscall *TextConstructor)(Text*);
extern TextConstructor constructText;

struct Text
{
    unsigned char storage[28];
    Text();
    ~Text();
};

__forceinline Text::Text()
{
    constructText(this);
}

struct Reference
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Logger
{
    void __cdecl logMessage(int, const char*, ...);
};

struct Shared
{
    Logger* object;
    Reference* reference;

    Logger* operator->() const;
    ~Shared();
};

__forceinline Logger* Shared::operator->() const
{
    return object;
}

__forceinline Shared::~Shared()
{
    Reference* p = reference;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

extern Shared __cdecl getLogger();

struct S
{
    virtual ~S();
    unsigned long provider;
    unsigned long hash;
    Text text;

    S();
};

S::S() : provider(0), hash(0)
{
    if (!CryptAcquireContextA(&provider, 0, 0, 1, 0xf0000000UL))
        getLogger()->logMessage(
            3, "Error during CryptAcquireContext. GetLastError = %d",
            GetLastError());

    if (!CryptCreateHash(provider, 0x8003, 0, 0, &hash))
        getLogger()->logMessage(
            3, "Error during CryptCreateHash. GetLastError = %d",
            GetLastError());
}
