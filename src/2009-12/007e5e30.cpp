// roc 2009-12 007e5e30  unit: RBX::Log  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e5e30
//
// 007e5e30  e9ab490000           jmp 0x7ea7e0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
