// roc 2009-12 004284e0  unit: CPatchedControlComboBox  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004284e0
//
// 004284e0  e91b0d3d00           jmp 0x7f9200
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
