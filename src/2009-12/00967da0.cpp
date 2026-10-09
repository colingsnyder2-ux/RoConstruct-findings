// roc 2009-12 00967da0  unit: seg_00960000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967da0
//
// 00967da0  e91b9ba9ff           jmp 0x4018c0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
