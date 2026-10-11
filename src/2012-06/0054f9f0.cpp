// from server: 29% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    int field0;
    void f(int, int, int, int, void*);
};

extern "C" void __cdecl Call_0054dda0(void*);

void S::f(int a, int b, int c, int d, void* e)
{
    int local[4];
    local[0] = a;
    local[1] = b;
    local[2] = c;
    local[3] = d;
    field0 = 0;
    if (e)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)e + 4), 1);
    }
    Call_0054dda0(this);
    if (e)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)e + 4), -1) == 1)
        {
            (*(void(__thiscall**)(void*))*(void**)e)(e);
            if (_InterlockedExchangeAdd((volatile long*)((char*)e + 8), -1) == 1)
            {
                (*(void(__thiscall**)(void*))((*(void***)e)[2]))(e);
            }
        }
    }
}
