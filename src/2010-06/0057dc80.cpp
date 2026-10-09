// roc 2010-06 0057dc80  unit: seg_00570000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057dc80
//
// 0057dc80  8b442408             mov eax, dword ptr [esp + 8]
// 0057dc84  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 0057dc89  50                   push eax
// 0057dc8a  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 0057dc90  83c404               add esp, 4
// 0057dc93  c3                   ret 
// copied from an identical function in another client (function ?sub_007223e0@ns_ROCX000015@ns_ROCX00000d@@YAPAXIII@Z)

namespace ns_ROCX000015 {
extern void G1_func_005cc200();
void fn_ROCX000015()
{
    G1_func_005cc200();
}
}
