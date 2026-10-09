// roc 2009-12 0098a500  unit: seg_00980000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a500
//
// 0098a500  e91b33e7ff           jmp 0x7fd820
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
