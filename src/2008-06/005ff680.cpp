// from server: 62% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy();

    volatile long useCount;
    volatile long weakCount;
};

struct Count
{
    Control* control;

    Count();
    ~Count();
    Count& operator=(const Count&);
};

inline Count::Count() : control(0)
{
}

inline Count::~Count()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->useCount, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 0)
                p->destroy();
        }
    }
}

struct Shared
{
    void* object;
    Count count;

    Shared();
    Shared(const Shared&);
};

inline Shared::Shared() : object(0)
{
}

struct Source
{
    Shared get();
};

Shared __cdecl create();

struct S
{
    char padding[0x200];
    Source* source;

    Shared get();
};

Shared S::get()
{
    Shared result;
    if (source)
        result = source->get();
    else
        result = create();
    return result;
}
