// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Receiver {
    void invoke(Shared value, int argument);
};

struct ReceiverHolder {
    char padding[8];
    Receiver receiver;
};

struct Argument {
    char padding[16];
    ReceiverHolder* receiver;
};

struct Bound {
    Shared value;
    int argument;
};

struct S {
    Bound* bound;
    void* f(void* result, Argument* argument);
};

void* S::f(void* result, Argument* argument)
{
    Bound* value = bound;
    Receiver* receiver = &argument->receiver->receiver;
    receiver->invoke(value->value, value->argument);
    return result;
}
