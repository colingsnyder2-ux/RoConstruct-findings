// roc 2009-12 008996c0  unit: CXTPRibbonBar  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008996c0
//
// 008996c0  e91bfcffff           jmp 0x8992e0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
