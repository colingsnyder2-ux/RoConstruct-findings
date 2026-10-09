// roc 2009-12 0061c120  unit: seg_00610000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061c120
//
// 0061c120  8b442408             mov eax, dword ptr [esp + 8]
// 0061c124  0faf44240c           imul eax, dword ptr [esp + 0xc]
// 0061c129  50                   push eax
// 0061c12a  ff1578b79800         call dword ptr [0x98b778]
// 0061c130  83c404               add esp, 4
// 0061c133  c3                   ret 
// copied from an identical function in another client (function ?sub_007223e0@ns_ROCX000015@ns_ROCX000004@@YAPAXIII@Z)

namespace ns_ROCX000015 {
extern void G1_func_005d35b0();
void fn_ROCX000015()
{
    G1_func_005d35b0();
}
}
