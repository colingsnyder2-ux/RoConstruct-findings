// from server: 65% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info {
    bool operator==(const type_info&) const;
};

struct RefCount {
    long refs;
    long weak;
};

struct Obj {
    void* vptr;
    char pad[0xc];
    RefCount* rc;
};

struct S {
};

void __cdecl f(void* a, void* b, int c) {
    if (c == 0) {
        if (b == 0) return;
        Obj* src = (Obj*)a;
        Obj* dst = (Obj*)b;
        *(int*)((char*)dst + 0) = *(int*)((char*)src + 0);
        *(int*)((char*)dst + 4) = *(int*)((char*)src + 4);
        *(int*)((char*)dst + 8) = *(int*)((char*)src + 8);
        *(int*)((char*)dst + 0xc) = *(int*)((char*)src + 0xc);
        RefCount* r = *(RefCount**)((char*)src + 0x10);
        *(RefCount**)((char*)dst + 0x10) = r;
        if (r == 0) return;
        _InterlockedExchangeAdd(&r->refs, 1);
        return;
    }
    if (c == 1) {
        Obj* o = (Obj*)a;
        RefCount* r = o->rc;
        if (r == 0) return;
        if (_InterlockedExchangeAdd(&r->refs, -1) != 1) return;
        void** vt = *(void***)r;
        void (*fn)(void*) = (void (*)(void*))vt[1];
        fn(r);
        if (_InterlockedExchangeAdd(&r->weak, -1) != 1) return;
        void** vt2 = *(void***)r;
        void (*fn2)(void*) = (void (*)(void*))vt2[2];
        fn2(r);
        return;
    }
    Obj* o = (Obj*)a;
    void* t = o->vptr;
    extern bool __stdcall typeinfo_eq(void*, void*);
    bool eq = typeinfo_eq(t, (void*)0x93b378);
    o->vptr = eq ? 0 : b;
}
