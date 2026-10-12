// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long uses;
    volatile long weak;
    void release();
};

inline void Control::release() {
    if (_InterlockedExchangeAdd(&uses, -1) - 1 == 0) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) - 1 == 0)
            destroy();
    }
}

struct Temporary;

struct Shared {
    void* object;
    Control* control;
    Shared(const Temporary&);
    ~Shared();
};

struct Temporary {
    void* object;
    Control* control;
    ~Temporary();
};

inline Shared::Shared(const Temporary& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->uses, 1);
}

inline Shared::~Shared() {
    if (control)
        control->release();
}

inline Temporary::~Temporary() {
    if (control)
        control->release();
}

extern Temporary __cdecl makeShared(void*);

struct Base {
    char data[0x124];
};

struct Iterator {
    void* data[3];
};

struct Container {
    Iterator erase(void* const&);
};

struct Descriptor {
    void invoke(Base*, Shared);
};

extern Descriptor descriptor;

struct S {
    char prefix[0x14];
    Base base;
    Container container;
    void f(void*);
};

void S::f(void* value) {
    Base* target = this ? &base : 0;
    descriptor.invoke(target, makeShared(value));
    container.erase(value);
}
