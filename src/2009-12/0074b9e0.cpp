// roc 2009-12 0074b9e0  unit: RBX::GroundStage  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074b9e0
//
// 0074b9e0  e9fbfbffff           jmp 0x74b5e0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
