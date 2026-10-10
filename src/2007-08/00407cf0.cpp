// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Holder {
    void* ptr;
    RefCounted* ref;
};

struct Inner {
    char pad0[4];
    Holder holder;
};

struct Outer {
    void* field0;
    Inner inner;
};

struct Creator {
    void* field0;
    Inner inner;
    void construct(void* a, void* b);
    void assign(void* a, void* b);
};

void Creator::construct(void* a, void* b) {
    this->field0 = a;
    this->assign(a, b);
    if (a != 0) {
        Holder* h = (Holder*)((char*)a + 0xa4);
        if (h != 0) {
            h->ptr = a;
            RefCounted* old = this->inner.holder.ref;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            RefCounted* prev = h->ref;
            if (prev != 0) {
                if (_InterlockedExchangeAdd(&prev->refcount, -1) == 1) {
                    void** vt = *(void***)prev;
                    void (*dtor)(void*) = (void (*)(void*))vt[2];
                    dtor(prev);
                }
            }
            h->ref = old;
        }
    }
}
