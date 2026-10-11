// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct AnyHolder {
    void* vptr;
    RefCounted* ptr;
};

struct Target {
    void invoke(AnyHolder* a, AnyHolder* b, AnyHolder* c, AnyHolder* d);
};

void Target::invoke(AnyHolder* a, AnyHolder* b, AnyHolder* c, AnyHolder* d)
{
    RefCounted* p1 = a->ptr;
    RefCounted* p2 = b->ptr;
    RefCounted* p3 = c->ptr;

    void* v1 = p1->vptr;
    void* v2 = p2->vptr;
    void* v3 = p3->vptr;

    if (p1->refcount) {
        _InterlockedExchangeAdd(&p1->refcount, 1);
    }
    if (p2->refcount) {
        _InterlockedExchangeAdd(&p2->refcount, 1);
    }
    if (p3->refcount) {
        _InterlockedExchangeAdd(&p3->refcount, 1);
    }

    void (*fn)(void*, void*, void*, void*) = (void (*)(void*, void*, void*, void*))v1;
    fn(v2, v3, p1, p2);
}
