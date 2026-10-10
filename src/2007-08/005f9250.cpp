// from server: 74% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct FactoryProduct {
    void* field0;
    void* field4;
    RefCounted* field8;
    void* __cdecl assign(FactoryProduct*);
};

void* FactoryProduct::assign(FactoryProduct* other) {
    if (other != 0) {
        FactoryProduct* p = (FactoryProduct*)operator_new(0xc);
        if (p == 0) {
            return 0;
        }
        p->field0 = this->field0;
        p->field4 = this->field4;
        p->field8 = this->field8;
        if (p->field8 != 0) {
            _InterlockedExchangeAdd(&p->field8->refCount, 1);
        }
        return p;
    } else {
        RefCounted* r = other->field8;
        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))r->vptr[1])(r);
                if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))r->vptr[2])(r);
                }
            }
        }
        operator_delete(other);
        return 0;
    }
}
