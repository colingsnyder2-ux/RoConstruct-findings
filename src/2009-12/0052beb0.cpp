// roc 2009-12 0052beb0  unit: RBX::Network::Server  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052beb0
//
// 0052beb0  e95bfcffff           jmp 0x52bb10
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
