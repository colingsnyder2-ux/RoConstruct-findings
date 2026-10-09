// roc 2009-12 0068c4f0  unit: ArchiveBinder  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068c4f0
//
// 0068c4f0  e97b2bffff           jmp 0x67f070
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}
