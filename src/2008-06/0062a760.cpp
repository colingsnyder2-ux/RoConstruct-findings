// from server: 94% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);

struct Count {
    virtual ~Count();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Count* count;
    ~Shared();
};

inline Shared::~Shared() {
    Count* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Value {
    virtual ~Value();
};

struct Slot {
    Value* value;
    void assign(const Shared&);
};

struct FloatValue : Value {
    float value;
    FloatValue(float);
    virtual ~FloatValue();
};

inline FloatValue::FloatValue(float x) : value(x) {}

struct Arguments {
    unsigned int bookkeeping[3];
    Slot* first;
    Slot* last;
    Slot* limit;
    Arguments(unsigned int);
    ~Arguments();
};

struct Receiver {
    virtual ~Receiver();
    virtual void invoke(Arguments*) = 0;
};

struct S {
    Receiver* receiver;
    void f(Shared, float);
};

void S::f(Shared object, float value) {
    Arguments arguments(2);
    void (__cdecl* invalid)() = _invalid_parameter_noinfo;

    if (static_cast<unsigned int>(arguments.last - arguments.first) <= 0U)
        invalid();
    arguments.first->assign(object);

    if (static_cast<unsigned int>(arguments.last - arguments.first) <= 1U)
        invalid();

    Slot* slot = arguments.first + 1;
    Value* replacement = new FloatValue(value);
    Value* previous = replacement;
    if (static_cast<const void*>(&value) != static_cast<const void*>(slot)) {
        previous = slot->value;
        slot->value = replacement;
    }
    if (previous)
        delete previous;

    receiver->invoke(&arguments);
}
