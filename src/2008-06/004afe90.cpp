// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refcount;
};

struct Inner {
    int a;
    RefCounted* b;
};

struct Arg {
    int x;
    RefCounted* y;
};

struct Sub {
    char pad[0x2cb0];
};

struct Outer {
    char pad0[0x2cb0];
    Sub sub;
};

struct Target {
    void* vptr;
    int field4;
    int field8;
    RefCounted* fieldC;

    void construct(int a, Arg* arg);
};

extern "C" void __stdcall helper_5e8c40(void*, void*);

void Target::construct(int a, Arg* arg) {
    this->field4 = a;
    this->vptr = (void*)0x824b2c;
    this->field8 = arg->x;
    RefCounted* rc = arg->y;
    this->fieldC = rc;
    if (rc != 0) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    int v = arg->x;
    void* tmp = 0;
    helper_5e8c40(&tmp, &v);
}
