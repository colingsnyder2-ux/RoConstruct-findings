// from server: 100% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    volatile long value;
    void increment();
};

__forceinline void Count::increment()
{
    _InterlockedExchangeAdd(&value, 1);
}

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    Count strong;
    Count weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        control->strong.increment();
}

inline Shared::~Shared()
{
    if (control &&
        _InterlockedExchangeAdd(&control->strong.value, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak.value, -1) == 1)
            control->destroy();
    }
}

struct Object;

struct Callback {
    virtual void invoke(Object*, Shared) = 0;
};

struct S {
    void f(Shared value, Callback* callback);
};

struct Prefix {
    char padding[0x130];
};

struct Object : Prefix, S {
};

void S::f(Shared value, Callback* callback)
{
    try {
        callback->invoke(static_cast<Object*>(this), value);
        __assume(0);
    }
    catch (...) {
        volatile char buffer[36];
        buffer[0] = 0;
        throw;
    }
}
