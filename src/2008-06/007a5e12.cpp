// from server: 53% by atomic.potato
// roc 2008-06 007a5e12  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5e12
//
// 007a5e12  33d2                 xor edx, edx
// 007a5e14  8d4114               lea eax, [ecx + 0x14]
// 007a5e17  42                   inc edx
// 007a5e18  f00fc110             lock xadd dword ptr [eax], edx
// 007a5e1c  8d4108               lea eax, [ecx + 8]
// 007a5e1f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle {
    char pad0[8];
    long someValue;
    char pad1[8];
    long refCount;

    long getRef();
};

long CXTIconHandle::getRef() {
    long oldValue = _InterlockedExchangeAdd(&this->refCount, 1);
    return (long)(this->someValue);
}
