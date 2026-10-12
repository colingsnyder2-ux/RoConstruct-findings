// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    long unused;
    volatile long count;
};

struct Shared
{
    void* pointer;
    RefCount* reference;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), reference(other.reference)
{
    if (reference)
        _InterlockedExchangeAdd(&reference->count, 1);
}

struct Value
{
    Shared pointer;
    float value;
};

struct Receiver
{
    void func_0062a1c0(Shared pointer, float value);
    void set(const Value& value);
};

inline void Receiver::set(const Value& value)
{
    func_0062a1c0(value.pointer, value.value);
}

struct Destination
{
    char padding[8];
    Receiver receiver;
};

struct Argument
{
    char padding[16];
    Destination* destination;
};

struct S
{
    Value* value;
    void* func_0062a2f0(void* result, Argument* argument);
};

void* S::func_0062a2f0(void* result, Argument* argument)
{
    argument->destination->receiver.set(*value);
    return result;
}
