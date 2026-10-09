// roc 2009-12 00530f90  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00530f90
//
// 00530f90  e9abfeffff           jmp 0x530e40
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
