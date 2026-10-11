// from server: 40% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct Holder {
    RefCounted* ptr;
};

struct S {
    void __cdecl f(Holder* out, Holder* in);
};

void S::f(Holder* out, Holder* in)
{
    RefCounted* p = in->ptr;
    RefCounted* q = 0;
    if (p == 0) {
        q = (RefCounted*)((char*)p + 0x14);
    }
    out->ptr = q;
    RefCounted* r = in->ptr;
    out->ptr = r;
    if (r != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
    }
}
