// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
    long weakrefcount;
};

struct Binder {
    void* field0;
    RefCounted* field4;
    void* field8;
    Binder(void* a, void* b, void* c, void* d, void* e);
};

extern "C" int __cdecl sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

Binder::Binder(void* a, void* b, void* c, void* d, void* e)
{
    char local[16];
    if (!sub_4879D0(local)) {
        this->field8 = (void*)0x416a60;
        this->field0 = (void*)0x42c400;
        RefCounted* p = (RefCounted*)sub_62FEF6(0x10);
        if (p) {
            p->vptr = *(void***)local;
            p->refcount = *(long*)(local + 4);
            p->weakrefcount = *(long*)(local + 8);
            long* extra = (long*)(local + 12);
            p->vptr = *(void***)local;
            p->refcount = *(long*)(local + 4);
            p->weakrefcount = *(long*)(local + 8);
            if (extra) {
                _InterlockedExchangeAdd(extra + 1, 1);
            }
        }
        this->field4 = p;
    }
    long* extra = (long*)(local + 12);
    if (extra) {
        if (_InterlockedExchangeAdd(extra + 1, -1) == 1) {
            void** vt = *(void***)extra;
            ((void (__thiscall*)(void*))vt[1])(extra);
            if (_InterlockedExchangeAdd(extra + 2, -1) == 1) {
                void** vt2 = *(void***)extra;
                ((void (__thiscall*)(void*))vt2[2])(extra);
            }
        }
    }
}
