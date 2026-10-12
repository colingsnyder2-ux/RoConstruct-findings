// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace RBX {
    class Instance;
    class ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_006174e0(RBX::Instance*);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Product {
    void* object;
    Reference reference;
    ~Product();
};

__forceinline Product::~Product()
{
    Control* p = reference.control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

Product __cdecl func_00618a40(RBX::ServiceProvider*);

struct FilteredSelection {
    RBX::Instance* instance;
    void* cached;
    Reference reference;
    void* get(int);
};

void* FilteredSelection::get(int)
{
    if (!cached) {
        Product product = func_00618a40(func_006174e0(instance));
        cached = product.object;
        reference = product.reference;
    }
    return cached;
}
