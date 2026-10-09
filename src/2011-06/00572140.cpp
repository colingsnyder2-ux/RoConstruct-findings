// roc 2011-06 00572140  unit: seg_00570000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572140
//
// 00572140  8b442408             mov eax, dword ptr [esp + 8]
// 00572144  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 00572149  50                   push eax
// 0057214a  ff15400aa400         call dword ptr [0xa40a40]
// 00572150  83c404               add esp, 4
// 00572153  c3                   ret 
// copied from an identical function in another client (function ?sub_007223e0@ns_ROCX00000d@@YAPAXIII@Z)

namespace ns_ROCX00000d {
extern "C" void* (__cdecl *malloc_ptr)(unsigned int);

void* __cdecl sub_007223e0(unsigned int a, unsigned int b, unsigned int c)
{
    return malloc_ptr(b * c);
}
}
