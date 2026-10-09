// roc 2009-12 0063f4ae  unit: std::runtime_error  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063f4ae
//
// 0063f4ae  e959feffff           jmp 0x63f30c
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
