// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    char pad[4];
    volatile long refcount;
};

struct CreatorBase {
    void* field0;
    void* field4;
};

struct Creator {
    void* field0;
    CreatorBase base;
    void init(void* a, void* b);
};

void Creator::init(void* a, void* b)
{
    field0 = a;
    base.field0 = 0;
    base.field4 = 0;
    if (a) {
        RefCounted* r = (RefCounted*)((char*)a + 0xa4);
        if (r) {
            r->vptr = a;
            RefCounted* old = (RefCounted*)base.field0;
            if (old) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            RefCounted* old2 = (RefCounted*)base.field4;
            if (old2) {
                if (_InterlockedExchangeAdd(&old2->refcount, -1) == 1) {
                    void** vt = *(void***)old2;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(old2);
                }
            }
            base.field4 = (void*)old;
        }
    }
}
