// roc 2009-12 005123b0  unit: boost::detail::thread_data_base  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005123b0
//
// 005123b0  e93bb70100           jmp 0x52daf0
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
