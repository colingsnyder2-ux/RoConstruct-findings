// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct Inner {
    char pad[0xa4];
    void* owner;
    RefCounted* ptr;
};

struct Outer {
    void* field0;
    void* field4;
    void* init(void* a, void* b);
};

void* Outer::init(void* a, void* b) {
    field0 = a;
    Inner* inner = (Inner*)((char*)a + 0xa4);
    if (inner) {
        inner->owner = a;
        RefCounted* p = (RefCounted*)field4;
        if (p) {
            _InterlockedExchangeAdd(&p->refCount, 1);
        }
        RefCounted* q = inner->ptr;
        if (q) {
            if (_InterlockedExchangeAdd(&q->refCount, -1) == 1) {
                void** vt = (void**)q->vptr;
                void (*fn)(void*) = (void (*)(void*))vt[2];
                fn(q);
            }
        }
        inner->ptr = p;
    }
    return this;
}
