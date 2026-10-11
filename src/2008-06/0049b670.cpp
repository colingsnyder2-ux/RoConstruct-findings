// from server: 87% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct Holder {
    void* vptr;
    int field4;
    int field8;
};

struct S {
    char pad0[4];
    int field4;
    int field8;
    Holder* f();
};

Holder* S::f() {
    Holder* p = (Holder*)operator_new(0xc);
    if (p != 0) {
        p->vptr = (void*)0x8229b8;
        p->field4 = this->field4;
        int c = this->field8;
        p->field8 = c;
        if (c != 0) {
            _InterlockedExchangeAdd((volatile long*)(c + 4), 1);
        }
    }
    return p;
}
