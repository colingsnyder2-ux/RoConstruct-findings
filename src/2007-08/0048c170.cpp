// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct CreatorBase {
    void* vptr;
    void* field4;
};

struct FactoryProduct {
    void* field0;
    CreatorBase creator;
    void sub_48C170(void* arg1, void* arg2);
};

struct Helper {
    void sub_48C0E0(void* a, void* b);
};

void FactoryProduct::sub_48C170(void* arg1, void* arg2)
{
    this->field0 = arg1;
    ((Helper*)&this->creator)->sub_48C0E0(arg1, arg2);

    if (arg1 != 0) {
        RefCounted* p = (RefCounted*)((char*)arg1 + 0xa4);
        if (p != 0) {
            p->vptr = arg1;

            RefCounted* old = (RefCounted*)this->creator.field4;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refCount, 1);
            }

            RefCounted* prev = (RefCounted*)p->vptr;
            if (prev != 0) {
                if (_InterlockedExchangeAdd(&prev->refCount, -1) == 1) {
                    void** vt = (void**)prev->vptr;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(prev);
                }
            }

            this->creator.field4 = p;
        }
    }
}
