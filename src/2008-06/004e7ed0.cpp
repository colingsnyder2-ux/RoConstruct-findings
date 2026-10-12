// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared() {
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Shared* position;
    Iterator(Shared*, Vector*);
    Shared& get(void (__cdecl*)()) const;
    void advance(void (__cdecl*)());
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared* first;
    Shared* last;
    Iterator begin(void (__cdecl*)());
    Iterator end(void (__cdecl*)());
};

inline Iterator::Iterator(Shared* p, Vector* v)
    : owner(v->proxy), position(p) {
}

inline Iterator Vector::end(void (__cdecl* report)()) {
    Shared* p = last;
    if (first > p)
        report();
    return Iterator(p, this);
}

inline Iterator Vector::begin(void (__cdecl* report)()) {
    Shared* p = first;
    if (p > last)
        report();
    return Iterator(p, this);
}

inline Shared& Iterator::get(void (__cdecl* report)()) const {
    if (!owner)
        report();
    Vector* v = owner ? owner->container : 0;
    if (position >= v->last)
        report();
    return *position;
}

inline void Iterator::advance(void (__cdecl* report)()) {
    if (!owner)
        report();
    Vector* v = owner ? owner->container : 0;
    if (position >= v->last)
        report();
    ++position;
}

struct VectorPtr {
    Vector* pointer;
    Control* control;
    VectorPtr acquire();
    ~VectorPtr();
};

inline VectorPtr::~VectorPtr() {
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Visitor {
    void* context;
    void apply(void*, Shared);
};

struct S {
    unsigned char reserved[0x108];
    VectorPtr values;
    void f(Visitor, void*);
};

void S::f(Visitor visitor, void* argument) {
    if (values.pointer) {
        VectorPtr held = values.acquire();
        Vector* vector = held.pointer;
        void (__cdecl* report)() = invalid_parameter_noinfo;
        Iterator finish = vector->end(report);
        Iterator current = vector->begin(report);

        for (;;) {
            if (!current.owner || current.owner != finish.owner)
                report();
            if (current.position == finish.position)
                break;
            visitor.apply(argument, current.get(report));
            current.advance(report);
        }
    }
}
