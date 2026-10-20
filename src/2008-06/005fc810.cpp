// from server: 84% by Espeon
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_listenerproduct_85fae4f2a6c66bc6.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
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

typedef boost::shared_ptr<Product> Shared;

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
    if (shared.get())
        shared.get()->first.connect(p0);

    Listener1* p1 = this;
    if (shared.get())
        shared.get()->second.connect(p1);

    Listener2* p2 = this;
    if (shared.get())
        shared.get()->third.connect(p2);

    Listener3* p3 = this;
    if (shared.get())
        shared.get()->fourth.connect(p3);
}
