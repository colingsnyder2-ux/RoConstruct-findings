// roc 2007-03 007236a0  unit: seg_00720000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007236a0
//
// 007236a0  8b442408             mov eax, dword ptr [esp + 8]
// 007236a4  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 007236a9  50                   push eax
// 007236aa  ff153ce97700         call dword ptr [0x77e93c]
// 007236b0  83c404               add esp, 4
// 007236b3  c3                   ret 
// copied from an identical function in another client (function ?sub_007223e0@ns_ROCX00000d@ns_ROCX000000@@YAPAXIII@Z)

namespace ns_ROCX00000d {
extern char G;

char* fn_ROCX00000d()
{
    return &G;
}
}
