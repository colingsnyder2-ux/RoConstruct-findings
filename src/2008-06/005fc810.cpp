// from server: 80% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    void assign(const Reference&);
};

struct Listener {
    void connect(void*);
};

struct Product {
    char pad0[0x24];
    Listener first;
    char pad1[0x1f];
    Listener second;
    char pad2[0xeb];
    Listener third;
    char pad3[0x1f];
    Listener fourth;
};

struct Shared {
    Product* object;
    Reference reference;
    ~Shared();
    Shared& operator=(const Shared&);
};

__forceinline Shared::~Shared()
{
    Control* p = reference.control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    reference.assign(other.reference);
    return *this;
}

Shared __cdecl createProduct(void*);

struct Prefix {
    char padding[0x168];
};

struct Listener0 {
    char data[4];
};

struct Listener1 {
    char data[12];
};

struct Listener2 {
    char data[4];
};

struct Listener3 {
    char data[12];
};

struct S : Prefix, Listener0, Listener1, Listener2, Listener3 {
    Shared shared;
    void f(void*);
};

void S::f(void* argument)
{
    shared = createProduct(argument);

    Listener0* p0 = this;
    if (shared.object)
        shared.object->first.connect(p0);

    Listener1* p1 = this;
    if (shared.object)
        shared.object->second.connect(p1);

    Listener2* p2 = this;
    if (shared.object)
        shared.object->third.connect(p2);

    Listener3* p3 = this;
    if (shared.object)
        shared.object->fourth.connect(p3);
}
