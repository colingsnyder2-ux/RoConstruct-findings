// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct RefCounted {
    Inner* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Outer {
    void* field0;
    void* field4;
    void* field8;
    RefCounted* field10;
    void release();
};

void Outer::release() {
    RefCounted* p = field10;
    if (p) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->vptr->f2();
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                p->vptr->f3();
            }
        }
    }
    void** q = (void**)((char*)field8 + 4);
    *q = (void*)0x802570;
    *(void**)this = (void*)0x840860;
}
