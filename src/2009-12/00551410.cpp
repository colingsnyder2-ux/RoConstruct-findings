// roc 2009-12 00551410  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00551410
//
// 00551410  e9dbfeffff           jmp 0x5512f0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
