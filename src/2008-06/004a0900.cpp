// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool func_0060a2f0();

struct Inner {
    int a;
    int b;
};

struct S {
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    Inner* p = 0;
    *(int*)this = 0;
    if (!func_0060a2f0()) {
        Inner* dst = (Inner*)((char*)this + 8);
        if (dst) {
            dst->a = (int)p;
            dst->b = (int)p;
            if (p) {
                _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
            }
        }
        *(int*)this = 0x822fa4;
    } else {
        *(int*)this = 0;
    }
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            ((void (__thiscall*)(Inner*))((int*)p)[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                ((void (__thiscall*)(Inner*))((int*)p)[2])(p);
            }
        }
    }
    return (int)this;
}
