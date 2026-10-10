// from server: 60% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle
{
    void* f();
};

void* CXTIconHandle::f()
{
    _InterlockedExchangeAdd((volatile long*)((char*)this + 0x14), 1);
    return (void*)((char*)this + 8);
}
