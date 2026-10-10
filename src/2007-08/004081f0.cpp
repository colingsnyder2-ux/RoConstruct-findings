// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    void assign(const Name* n);
};

struct Creator {
    const Name* name;
    CreatorBase base;
    Creator(const Name* n, const Name* n2);
};

struct RefCounted {
    long refCount;
};

struct Holder {
    RefCounted* ptr;
    RefCounted* ptr2;
};

Creator::Creator(const Name* n, const Name* n2) {
    this->name = n;
    this->base.assign(n2);
    if (n != 0) {
        Holder* h = (Holder*)((char*)n + 0xa4);
        if (h != 0) {
            h->ptr = (RefCounted*)n;
            RefCounted* old = h->ptr;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refCount, 1);
            }
            RefCounted* old2 = h->ptr2;
            if (old2 != 0) {
                if (_InterlockedExchangeAdd(&old2->refCount, -1) == 1) {
                    void** vtbl = *(void***)old2;
                    void (*dtor)(RefCounted*) = (void (*)(RefCounted*))vtbl[2];
                    dtor(old2);
                }
            }
            h->ptr2 = old;
        }
    }
}
