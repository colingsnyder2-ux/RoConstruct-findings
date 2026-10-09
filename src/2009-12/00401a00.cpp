// roc 2009-12 00401a00  unit: boost::detail::sp_counted_base  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401a00
//
// 00401a00  e9551e3f00           jmp 0x7f385a
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
