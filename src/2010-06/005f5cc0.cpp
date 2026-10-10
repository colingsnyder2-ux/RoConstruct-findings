// from server: 62% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    int pad0[7];
    int value;
    volatile long* refcount;
    void SetImpl(void* out);
};

void S::SetImpl(void* out)
{
    struct Result {
        int value;
        volatile long* refcount;
    };

    Result* result = (Result*)out;
    result->value = value;
    result->refcount = refcount;

    if (refcount != 0)
        _InterlockedExchangeAdd(refcount + 1, 1);
}
