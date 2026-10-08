// from server: 60% by colin
// roc 2007-08 007251c6  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007251c6
//
// 007251c6  33d2                 xor edx, edx
// 007251c8  8d4114               lea eax, [ecx + 0x14]
// 007251cb  42                   inc edx
// 007251cc  f00fc110             lock xadd dword ptr [eax], edx
// 007251d0  8d4108               lea eax, [ecx + 8]
// 007251d3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle {
    char pad0[8];
    char pad1[12];
    volatile long refcount;
    int* getRefCount();
};

int* CXTIconHandle::getRefCount()
{
    _InterlockedExchangeAdd(&refcount, 1);
    return (int*)((char*)this + 8);
}
