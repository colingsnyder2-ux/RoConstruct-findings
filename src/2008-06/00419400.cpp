// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    RefCount* count;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->strong);
}

inline Shared::~Shared()
{
    if (count)
    {
        RefCount* p = count;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Callable
{
    unsigned char storage[36];

    Callable(const Callable&);
    ~Callable();
};

struct Holder
{
    unsigned char storage[44];

    Holder(Shared, Callable);
    Holder(const Holder&);
    ~Holder();
};

struct Result
{
    int first;
    int second;
    Holder holder;

    Result(int, int, const Holder&);
};

inline Result::Result(int a, int b, const Holder& h)
    : first(a), second(b), holder(h)
{
}

Result __cdecl f(int first, int second, Shared shared, Callable callable)
{
    return Result(first, second, Holder(shared, callable));
}
