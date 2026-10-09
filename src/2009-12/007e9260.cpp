// roc 2009-12 007e9260  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9260
//
// 007e9260  e97bffffff           jmp 0x7e91e0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
