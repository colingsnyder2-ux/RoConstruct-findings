// roc 2009-12 006d8fe0  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d8fe0
//
// 006d8fe0  e98bffffff           jmp 0x6d8f70
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
