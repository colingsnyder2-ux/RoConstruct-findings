// from server: 53% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    void __cdecl f(void*);
};

void S::f(void* p)
{
    struct T
    {
        void* first;
        volatile long refs;
    };

    T* q = *(T**)0xb794fc;
    *(void**)p = *(void**)0xb794f8;
    *(T**)((char*)p + 4) = q;
    if (q != 0)
        _InterlockedExchangeAdd(&q->refs, 1);
}
