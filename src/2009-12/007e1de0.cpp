// roc 2009-12 007e1de0  unit: RBX::CircleRadialNormal  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e1de0
//
// 007e1de0  e9bbffffff           jmp 0x7e1da0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
