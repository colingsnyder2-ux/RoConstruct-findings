// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
extern void (__cdecl *invalid_parameter)();
extern void __cdecl prepare(void*);

struct Control {
    long reserved;
    volatile long references;
};

struct Pair {
    void* object;
    Control* control;

    Pair();
    Pair(const Pair&);
    ~Pair();
};

struct Vector;

struct Proxy {
    Vector* owner;

    Proxy(Vector*);
};

struct VectorBase {
    Proxy* proxy;

    VectorBase(Vector*);
    ~VectorBase();
};

struct Vector : VectorBase {
    unsigned int unused1;
    unsigned int unused2;
    Pair* first;
    Pair* last;
    Pair* limit;

    Vector();
    ~Vector();
};

struct Temporary {
    void* value;

    void __thiscall build(void*, Vector*);
};

inline Proxy::Proxy(Vector* value) : owner(value) {}

inline VectorBase::VectorBase(Vector* value)
    : proxy(new Proxy(value)) {}

inline Vector::Vector() : VectorBase(this) {
    first = 0;
    last = 0;
    limit = 0;
}

inline Pair::Pair() : object(0), control(0) {}

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->references;
        _InterlockedExchangeAdd(count, 1);
    }
}

Pair __cdecl reconstruct(void* input) {
    prepare(input);
    Vector values;
    Temporary temporary;
    temporary.build(input, &values);

    if (values.last - values.first == 0)
        return Pair();

    void (__cdecl *report)() = invalid_parameter;
    Pair* entry = values.first;

    if (entry > values.last)
        report();

    Vector* owner;
    if (!values.proxy) {
        report();
        owner = 0;
    } else {
        owner = values.proxy->owner;
    }

    if (entry >= owner->last)
        report();

    return Pair(*entry);
}
