// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Holder {
    void* ptr;
    RefCounted* obj;
};

void copyHolder(Holder* dst, Holder* src) {
    dst->ptr = src->ptr;
    dst->obj = src->obj;
    if (dst->obj) {
        _InterlockedExchangeAdd(&dst->obj->refcount, 1);
    }
}
