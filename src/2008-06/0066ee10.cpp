// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void __cdecl alignedFree(void*) throw();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Primary
{
    virtual ~Primary();
};

struct Secondary
{
    virtual ~Secondary();
    char storage[0x98];
};

struct Base : Primary, Secondary
{
    virtual ~Base();
};

struct Buffer
{
    virtual ~Buffer();
    void* allocation;
    unsigned long reserved[2];
    void* volatile extra;
    unsigned long size;
    unsigned long capacity;
    unsigned long last;
};

struct Shared
{
    Control* control;
    unsigned long reserved;
    ~Shared();
};

struct Tail
{
    unsigned long storage;
    ~Tail();
};

struct S : Base, Buffer
{
    unsigned long reserved;
    void* volatile hook;
    Shared shared;
    Tail tail;
    void releaseHook();
    virtual ~S();
};

inline Buffer::~Buffer()
{
    void* p = extra;
    if (p)
        alignedFree(p);
    extra = 0;
    size = 0;
    capacity = 0;
    alignedFree(allocation);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
    if (hook)
        releaseHook();
}
