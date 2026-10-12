// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Value {
    void* object;
    Control* control;
    Value(const Value&);
    ~Value();
};

inline Value::Value(const Value& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Value::~Value() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* vector;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Value* first;
    Value* last;
};

struct VectorPtr {
    Vector* object;
    Control* control;
    VectorPtr get() const;
    ~VectorPtr();
};

inline VectorPtr::~VectorPtr() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Output {
    void* first;
    void* second;
    void apply(void*, Value);
};

struct S {
    unsigned char padding[0x108];
    VectorPtr values;
    void f(Output, void*, unsigned long);
};

void S::f(Output output, void* argument, unsigned long) {
    VectorPtr* source = &values;
    if (!source->object)
        return;

    VectorPtr snapshot = source->get();
    Vector* vector = snapshot.object;
    Value* end = vector->last;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    if (vector->first > end)
        invalid();

    Value* current = vector->first;
    Proxy* endOwner = vector->proxy;

    if (current > vector->last)
        invalid();

    Proxy* owner = vector->proxy;

    for (;;) {
        if (!owner || owner != endOwner)
            invalid();

        if (current == end)
            break;

        if (!owner)
            invalid();

        Vector* container = owner ? owner->vector : 0;
        if (current >= container->last)
            invalid();

        output.apply(argument, *current);

        if (!owner)
            invalid();

        container = owner ? owner->vector : 0;
        if (current >= container->last)
            invalid();

        ++current;
    }
}
