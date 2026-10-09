// roc 2009-12 0040f3d0  unit: ChatEnter  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f3d0
//
// 0040f3d0  e9614a3e00           jmp 0x7f3e36
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
