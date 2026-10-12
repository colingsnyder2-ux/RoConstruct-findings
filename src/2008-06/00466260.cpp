// from server: 98% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    Control* control;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : pointer(0), control(0)
{
}

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

struct Pair
{
    Shared first;
    Shared second;

    ~Pair();
};

struct CSelectionCaption
{
    virtual void unused();

    Shared empty;
    int value;
    Shared first;
    Shared second;

    CSelectionCaption(int, int, Pair);
    void set(int);
};

CSelectionCaption::CSelectionCaption(int a, int b, Pair objects)
    : empty(), value(a), first(objects.first), second(objects.second)
{
    set(b);
}
