// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    void* table;
    volatile long strong;
};

struct Pair {
    void* pointer;
    Control* control;
    Pair(const Pair&);
    ~Pair();
};

inline Pair::Pair(const Pair& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

struct S {
    unsigned char padding[8];
    void* pointer;
    Pair value;
};

extern void __stdcall helper(void*, Pair, void*);

void __cdecl function(S* object, void* argument)
{
    helper(object->pointer, object->value, argument);
}
