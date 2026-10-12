// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long references;
};

struct Value {
    void* object;
    Control* control;

    Value(const Value& other) : object(other.object), control(other.control) {
        if (control)
            _InterlockedExchangeAdd(&control->references, 1);
    }

    ~Value() {}
};

struct Context {
    void (__cdecl *callback)(Value);
    Value value;
};

void __cdecl invoke(Context* context)
{
    context->callback(context->value);
}
