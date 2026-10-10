// from server: 53% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle
{
    void* Get();
    void* value;
    volatile long refCount;
};

void* CXTIconHandle::Get()
{
    _InterlockedExchangeAdd(&refCount, 1);
    return (char*)this + 8;
}
