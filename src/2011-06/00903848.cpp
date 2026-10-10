// from server: 46% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle
{
    long reserved0;
    long reserved1;
    volatile long refCount;
    long reserved2;
    void* handle;
    void* f();
};

void* CXTIconHandle::f()
{
    _InterlockedExchangeAdd(&refCount, 1);
    return &handle;
}
