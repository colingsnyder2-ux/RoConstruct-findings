// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct Creator : CreatorBase {
    void construct(Name** out);
};

struct RefCounted {
    long refcount;
    long weakcount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

extern "C" void __cdecl sub_57D2F0(Holder* out, Name** in);

void Creator::construct(Name** out) {
    Holder h;
    h.ptr = 0;
    sub_57D2F0(&h, out);
    *(void**)out = h.ptr;
    RefCounted* r = h.ref;
    *(RefCounted**)((char*)out + 4) = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refcount, 1);
    }
    RefCounted* old = h.ref;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd(&old->weakcount, -1) == 1) {
                old->destroyWeak();
            }
        }
    }
}
