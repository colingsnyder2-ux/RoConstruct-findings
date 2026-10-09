// roc 2009-12 004f6cb0  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6cb0
//
// 004f6cb0  e94bf1ffff           jmp 0x4f5e00
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
