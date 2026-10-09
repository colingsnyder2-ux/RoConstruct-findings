// roc 2009-12 0040cf20  unit: CDeclarationView  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040cf20
//
// 0040cf20  e9b16e3e00           jmp 0x7f3dd6
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
