// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool func_0060a2f0();

struct Outer {
    int f(int a, int b, int c);
};

int Outer::f(int a, int b, int c)
{
    int local;
    *(int*)this = 0;
    if (!func_0060a2f0()) {
        int* p = (int*)((char*)this + 8);
        if (p) {
            p[0] = a;
            p[1] = b;
            if (b) {
                _InterlockedExchangeAdd((volatile long*)(b + 4), 1);
            }
        }
        *(int*)this = 0x824cd4;
    } else {
        *(int*)this = 0;
    }
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)(b + 4), -1) == 1) {
            void** vt = *(void***)b;
            ((void (__thiscall*)(int))vt[1])(b);
            if (_InterlockedExchangeAdd((volatile long*)(b + 8), -1) == 1) {
                void** vt2 = *(void***)b;
                ((void (__thiscall*)(int))vt2[2])(b);
            }
        }
    }
    return (int)this;
}
