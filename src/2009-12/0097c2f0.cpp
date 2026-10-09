// roc 2009-12 0097c2f0  unit: seg_00970000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097c2f0
//
// 0097c2f0  e9fb7be3ff           jmp 0x7b3ef0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
