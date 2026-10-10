// from server: 57% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    int pad0[8];
    long first;
    volatile long* second;
    void f(long* result);
};

void S::f(long* result)
{
    result[0] = first;
    volatile long* p = second;
    result[1] = (long)p;
    if (p != 0)
        _InterlockedExchangeAdd(p + 1, 1);
}
