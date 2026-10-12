// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count
{
    Control* control;

    ~Count();
    Count& operator=(const Count&);
};

__forceinline Count::~Count()
{
    if (control)
        control->release();
}

struct Pair
{
    void* volatile pointer;
    Count count;

    Pair& operator=(const Pair&);
};

__forceinline Pair& Pair::operator=(const Pair& other)
{
    pointer = other.pointer;
    count = other.count;
    return *this;
}

Pair __cdecl acquire(void*);
extern unsigned char property;

struct S
{
    unsigned char padding[0x1fc];
    Pair pair;

    void set(void*);
    void notify(const void*);
};

void S::set(void* value)
{
    if (pair.pointer != value)
    {
        pair = acquire(value);
        notify(&property);
    }
}
