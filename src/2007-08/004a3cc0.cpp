// from server: 89% by colin
// roc 2007-08 004a3cc0  unit: boost::Vmutex::?$sp_counted_impl_p  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3cc0
//
// 004a3cc0  8bc1                 mov eax, ecx
// 004a3cc2  c700a0cc7900         mov dword ptr [eax], 0x79cca0
// 004a3cc8  33d2                 xor edx, edx
// 004a3cca  895004               mov dword ptr [eax + 4], edx
// 004a3ccd  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 004a3cd4  89500c               mov dword ptr [eax + 0xc], edx
// 004a3cd7  8b0d38e78b00         mov ecx, dword ptr [0x8be738]
// 004a3cdd  894810               mov dword ptr [eax + 0x10], ecx
// 004a3ce0  8b0d3ce78b00         mov ecx, dword ptr [0x8be73c]
// 004a3ce6  3bca                 cmp ecx, edx
// 004a3ce8  894814               mov dword ptr [eax + 0x14], ecx
// 004a3ceb  740c                 je 0x4a3cf9
// 004a3ced  83c104               add ecx, 4
// 004a3cf0  ba01000000           mov edx, 1
// 004a3cf5  f00fc111             lock xadd dword ptr [ecx], edx
// 004a3cf9  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    void *vptr;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    S *init();
};

extern int g_8be738;
extern int g_8be73c;

S *S::init()
{
    vptr = (void *)0x79cca0;
    field_4 = 0;
    field_8 = -1;
    field_c = 0;
    field_10 = g_8be738;
    field_14 = g_8be73c;
    if (field_14 != 0) {
        _InterlockedExchangeAdd((volatile long *)(field_14 + 4), 1);
    }
    return this;
}
