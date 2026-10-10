// from server: 60% by why2
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle {
    char pad[8];
    int field_8;
    char pad2[8];
    volatile long refcount;
    int increment();
};

int CXTIconHandle::increment()
{
    _InterlockedExchangeAdd(&refcount, 1);
    return (int)((char*)this + 8);
}
