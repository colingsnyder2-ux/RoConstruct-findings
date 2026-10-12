// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    volatile long* count = &strong;
    if (_InterlockedExchangeAdd(count, -1) == 0) {
        dispose();
        count = &weak;
        if (_InterlockedExchangeAdd(count, -1) == 0)
            destroy();
    }
}

struct Ptr {
    void* object;
    Control* control;

    Ptr(const Ptr&);
    ~Ptr();
};

inline Ptr::Ptr(const Ptr& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Ptr::~Ptr()
{
    if (control)
        control->release();
}

struct Base {
    char storage[16];
    Base(Ptr, Ptr);
};

struct S : Base {
    int value;
    S(Ptr, Ptr, int);
};

S::S(Ptr first, Ptr second, int n)
    : Base(first, second)
{
    value = n;
}
