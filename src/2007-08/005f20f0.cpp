// from server: 79% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

struct HolderManager {
    static Holder* Create(Holder* src, int flag);
};

Holder* HolderManager::Create(Holder* src, int flag) {
    if (flag == 0) {
        Holder* h = (Holder*)operator_new(8);
        if (h == 0) {
            return 0;
        }
        h->ptr = src->ptr;
        h->ref = src->ref;
        if (h->ref != 0) {
            _InterlockedExchangeAdd(&h->ref->refCount, 1);
        }
        return h;
    } else {
        RefCounted* r = src->ref;
        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)r->vfptr)[1])(r);
                if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))((void**)r->vfptr)[2])(r);
                }
            }
        }
        operator_delete(src);
        return 0;
    }
}
