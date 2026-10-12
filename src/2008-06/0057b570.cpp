// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Counter
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Counter* counter;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), counter(other.counter)
{
    if (counter)
        _InterlockedExchangeAdd(&counter->strong, 1);
}

inline Shared::~Shared()
{
    Counter* p = counter;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Signal
{
    void invoke(void**, Shared, void*);
};

struct Result
{
    char padding[16];
    Signal signal;
};

struct S
{
    Result* lookup(void*);
    void func_0057b570(void*, Shared, void*);
};

void S::func_0057b570(void* key, Shared value, void* argument)
{
    Result* result = lookup(key);
    if (result)
        result->signal.invoke(&key, value, argument);
}
