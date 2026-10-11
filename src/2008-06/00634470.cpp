// from server: 65% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info {
    bool operator==(const type_info&) const;
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Slot {
    void* vptr;
    RefCounted* ptr;
};

extern "C" void* __stdcall sub_802878(void*);

void assign(Slot* dst, Slot* src, int mode) {
    if (mode == 0) {
        if (dst == 0) return;
        dst->vptr = src->vptr;
        dst->ptr = src->ptr;
        if (dst->ptr == 0) return;
        _InterlockedExchangeAdd(&dst->ptr->refcount, 1);
        return;
    }
    if (mode == 1) {
        RefCounted* p = dst->ptr;
        if (p == 0) return;
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            void** vt = (void**)p->vptr;
            void (*f1)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            f1(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = (void**)p->vptr;
                void (*f2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                f2(p);
            }
        }
        return;
    }
    void* ti = (void*)0x95e900;
    void* r = sub_802878(ti);
    int b = (int)(unsigned char)(unsigned char)(unsigned long)r;
    int neg = -b;
    int mask = neg | (neg >> 31);
    dst->vptr = (void*)(mask & (int)src);
}
