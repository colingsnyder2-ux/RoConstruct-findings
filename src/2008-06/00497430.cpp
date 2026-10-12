// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
};

struct Value {
    String text;
    Shared owner;
};

struct Receiver {
    void invoke(String text, Shared owner);
};

struct Context {
    unsigned char padding[16];
    unsigned char* receiver;
};

struct S {
    Value* value;
    void* f(void* result, Context* context);
};

void* S::f(void* result, Context* context) {
    Receiver* receiver =
        reinterpret_cast<Receiver*>(context->receiver + 8);
    receiver->invoke(value->text, value->owner);
    return result;
}
