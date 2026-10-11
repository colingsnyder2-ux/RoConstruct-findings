// from server: 37% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" bool __cdecl func_00759970();

struct Inner {
    void* vtbl;
    long ref1;
    long ref2;
};

struct Outer {
    void* vtbl;
    long ref;
};

struct S {
    char pad0[0x10];
    Outer* field10;
    char pad14[0x10];
    bool method(Inner* a, int b, int c, int d, int e, int f);
};

bool S::method(Inner* a, int b, int c, int d, int e, int f)
{
    Inner* local = 0;
    if (func_00759970()) {
        if (a) {
            if (_InterlockedExchangeAdd(&a->ref1, -1) == 1) {
                void** vt = *(void***)a;
                ((void (__thiscall*)(Inner*))vt[1])(a);
                if (_InterlockedExchangeAdd(&a->ref2, -1) == 1) {
                    void** vt2 = *(void***)a;
                    ((void (__thiscall*)(Inner*))vt2[2])(a);
                }
            }
        }
        return false;
    }
    if (a) {
        _InterlockedExchangeAdd(&a->ref1, 1);
    }
    ((void (__thiscall*)(S*, Inner*, int, int, int, int, int))0x63bcf0)(this, a, b, c, d, e, f);
    if (a) {
        if (_InterlockedExchangeAdd(&a->ref1, -1) == 1) {
            void** vt = *(void***)a;
            ((void (__thiscall*)(Inner*))vt[1])(a);
            if (_InterlockedExchangeAdd(&a->ref2, -1) == 1) {
                void** vt2 = *(void***)a;
                ((void (__thiscall*)(Inner*))vt2[2])(a);
            }
        }
    }
    return true;
}
