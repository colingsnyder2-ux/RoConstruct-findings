// roc 2009-06 0059a0f0  unit: seg_00590000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059a0f0
//
// 0059a0f0  8b442408             mov eax, dword ptr [esp + 8]
// 0059a0f4  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 0059a0f9  50                   push eax
// 0059a0fa  ff1594e98900         call dword ptr [0x89e994]
// 0059a100  83c404               add esp, 4
// 0059a103  c3                   ret 
// copied from an identical function in another client (function ?sub_007223e0@ns_ROCX000015@@YAPAXIII@Z)

namespace ns_ROCX000015 {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* __cdecl sub_007223e0(unsigned int a, unsigned int b, unsigned int c)
{
    return malloc_ptr(b * c);
}
}
