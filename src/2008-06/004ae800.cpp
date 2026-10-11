// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void (__stdcall *vptr)(void*);
    int refcount;
};

struct Holder {
    char pad[8];
    int field8;
    RefCounted* fieldC;
    RefCounted* field10;
};

extern "C" void __cdecl sub_496910(int, RefCounted*, int);

void __cdecl sub_4ae800(Holder* h, int a, int b)
{
    RefCounted* p = h->field10;
    RefCounted* q = h->fieldC;
    if (p)
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    sub_496910(h->field8, q, b);
}
