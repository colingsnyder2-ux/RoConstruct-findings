// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* dummy;
};

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void deleteSelf();
};

struct Creator {
    void* vptr;
    RefCounted* ptr;
};

struct FactoryProduct {
    void* vptr;
    RefCounted* ptr;
    void* creatorVptr;
    bool init(Creator* out);
    FactoryProduct(Creator* c);
};

extern "C" bool __cdecl sub_4879D0(Creator* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

FactoryProduct::FactoryProduct(Creator* c) {
    Creator local;
    local.vptr = 0;
    local.ptr = 0;
    if (!sub_4879D0(&local)) {
        this->creatorVptr = (void*)0x5f4ff0;
        this->vptr = (void*)0x5f2170;
        RefCounted* p = (RefCounted*)sub_62FEF6(8);
        if (p) {
            p->refCount = (long)local.vptr;
            p->weakCount = (long)local.ptr;
            if (local.ptr) {
                _InterlockedExchangeAdd(&local.ptr->refCount, 1);
            }
        }
        this->ptr = p;
    } else {
        RefCounted* p = local.ptr;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
                p->destroy();
                if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                    p->deleteSelf();
                }
            }
        }
    }
}
