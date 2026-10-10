// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

struct Creator {
    Holder* create(Holder* out);
};

extern "C" void* __cdecl sub_408020(void** out);

Holder* Creator::create(Holder* out) {
    void* tmp = 0;
    void* p = sub_408020(&tmp);
    out->ptr = *(void**)p;
    RefCounted* r = *(RefCounted**)((char*)p + 4);
    out->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refs, 1);
    }
    RefCounted* old = (RefCounted*)tmp;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refs, -1) == 1) {
            void (*dtor)(RefCounted*) = *(void (**)(RefCounted*))((char*)*(void**)old + 4);
            dtor(old);
            if (_InterlockedExchangeAdd(&old->weakRefs, -1) == 1) {
                void (*wdtor)(RefCounted*) = *(void (**)(RefCounted*))((char*)*(void**)old + 8);
                wdtor(old);
            }
        }
    }
    return out;
}
