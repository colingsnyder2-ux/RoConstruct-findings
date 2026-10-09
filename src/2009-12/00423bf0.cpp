// roc 2009-12 00423bf0  unit: LogManager  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00423bf0
//
// 00423bf0  e92bffffff           jmp 0x423b20
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
