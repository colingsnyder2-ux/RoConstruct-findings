// from server: 62% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    void SetImpl(long* result);
    char padding[28];
    long value;
    volatile long* reference;
};

void S::SetImpl(long* result)
{
    result[0] = value;
    result[1] = (long)reference;
    if (reference != 0)
        _InterlockedExchangeAdd(reference + 1, 1);
}
