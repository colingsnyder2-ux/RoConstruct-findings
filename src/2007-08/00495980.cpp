// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct GetSet {
    void* vptr;
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
};

struct RefPropDescriptor {
    void* field0;
    void* field4;
    RefPropDescriptor* assign(RefPropDescriptor* other);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl unknown_494b60();
extern "C" void __cdecl unknown_40cc20();
extern "C" void __cdecl unknown_402a60();
extern "C" void __cdecl unknown_43a9f0();

RefPropDescriptor* RefPropDescriptor::assign(RefPropDescriptor* other)
{
    if (this->field0 == 0) {
        RefCounted* p = (RefCounted*)operator_new(0x10);
        if (p != 0) {
            p->refCount = 0;
            p->weakRefCount = 0;
            p->vptr = 0;
        }
        RefCounted* tmp = p;
        unknown_494b60();
        unknown_40cc20();
        this->field0 = tmp;
        unknown_402a60();
        if (tmp != 0) {
            if (_InterlockedExchangeAdd(&tmp->refCount, -1) == 0) {
                ((void (__thiscall*)(RefCounted*))((void**)tmp->vptr)[1])(tmp);
                if (_InterlockedExchangeAdd(&tmp->weakRefCount, -1) == 0) {
                    ((void (__thiscall*)(RefCounted*))((void**)tmp->vptr)[2])(tmp);
                }
            }
        }
    } else {
        RefCounted* p = (RefCounted*)this->field4;
        if (p != 0 && p->refCount > 1) {
            RefCounted* q = (RefCounted*)operator_new(0x10);
            if (q != 0) {
                unknown_43a9f0();
            }
            RefCounted* tmp = q;
            unknown_494b60();
            unknown_40cc20();
            this->field0 = tmp;
            unknown_402a60();
            if (tmp != 0) {
                if (_InterlockedExchangeAdd(&tmp->refCount, -1) == 0) {
                    ((void (__thiscall*)(RefCounted*))((void**)tmp->vptr)[1])(tmp);
                    if (_InterlockedExchangeAdd(&tmp->weakRefCount, -1) == 0) {
                        ((void (__thiscall*)(RefCounted*))((void**)tmp->vptr)[2])(tmp);
                    }
                }
            }
        }
    }
    return this;
}
