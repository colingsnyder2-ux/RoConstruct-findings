// roc 2009-12 004289a0  unit: CMainFrame  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004289a0
//
// 004289a0  e9b1b83c00           jmp 0x7f4256
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
