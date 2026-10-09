// roc 2009-12 004f52e0  unit: RBX::GfxAttachement  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f52e0
//
// 004f52e0  e99b2a0300           jmp 0x527d80
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
