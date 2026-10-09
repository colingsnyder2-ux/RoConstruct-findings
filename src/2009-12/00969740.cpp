// roc 2009-12 00969740  unit: seg_00960000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969740
//
// 00969740  e97b5caeff           jmp 0x44f3c0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
