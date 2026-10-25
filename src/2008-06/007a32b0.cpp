// from server: 100% by tester
// roc 2008-06 007a32b0  unit: CXTIconHandle  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a32b0
//
// 007a32b0  8b442408             mov eax, dword ptr [esp + 8]
// 007a32b4  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 007a32b9  50                   push eax
// 007a32ba  ff15b0288000         call dword ptr [0x8028b0]
// 007a32c0  83c404               add esp, 4
// 007a32c3  c3                   ret 

extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* __cdecl sub_007223e0(unsigned int a, unsigned int b, unsigned int c)
{
    return malloc_ptr(b * c);
}
