// from server: 28% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vtbl;
    volatile long ref1;
    volatile long ref2;
};

struct S {
    int field0;
    int f(int a, int b, int c, int d, Inner* e, int g);
};

extern void G1_func_00762220();

int S::f(int a, int b, int c, int d, Inner* e, int g)
{
    Inner* local;
    int arr[5];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    local = e;
    if (e)
        _InterlockedExchangeAdd(&e->ref1, 1);
    arr[4] = g;
    this->field0 = 0;
    G1_func_00762220();
    if (local)
    {
        if (_InterlockedExchangeAdd(&local->ref1, -1) == 1)
        {
            void** vt = (void**)local->vtbl;
            ((void (__thiscall*)(Inner*))vt[1])(local);
            if (_InterlockedExchangeAdd(&local->ref2, -1) == 1)
            {
                void** vt2 = (void**)local->vtbl;
                ((void (__thiscall*)(Inner*))vt2[2])(local);
            }
        }
    }
    return (int)this;
}
