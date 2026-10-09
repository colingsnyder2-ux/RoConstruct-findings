// roc 2009-12 00980b70  unit: seg_00980000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980b70
//
// 00980b70  e98bf9beff           jmp 0x570500
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
