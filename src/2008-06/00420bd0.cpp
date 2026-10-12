// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ControlBlock {
    void* vtable;
    volatile long references;
};

struct Pointer {
    void* object;
    ControlBlock* control;

    Pointer() throw();
    Pointer(const Pointer&) throw();
    ~Pointer() throw();
};

inline Pointer::Pointer() throw()
    : object(0), control(0)
{
}

inline Pointer::Pointer(const Pointer& other) throw()
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

extern Pointer globalPointer;

struct S {
    virtual void set(Pointer, Pointer);
    void f();
};

void S::f()
{
    set(globalPointer, Pointer());
}
