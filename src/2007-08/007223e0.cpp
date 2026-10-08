// from server: 100% by colin
// roc 2007-08 007223e0  unit: CXTIconHandle  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007223e0
//
// 007223e0  8b442408             mov eax, dword ptr [esp + 8]
// 007223e4  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 007223e9  50                   push eax
// 007223ea  ff15d0e67700         call dword ptr [0x77e6d0]
// 007223f0  83c404               add esp, 4
// 007223f3  c3                   ret 

extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* __cdecl sub_007223e0(unsigned int a, unsigned int b, unsigned int c)
{
    return malloc_ptr(b * c);
}
