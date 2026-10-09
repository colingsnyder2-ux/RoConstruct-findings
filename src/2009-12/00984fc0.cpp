// roc 2009-12 00984fc0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984fc0
//
// 00984fc0  a15011b900           mov eax, dword ptr [0xb91150]
// 00984fc5  50                   push eax
// 00984fc6  e88fe8e6ff           call 0x7f385a
// 00984fcb  83c404               add esp, 4
// 00984fce  c7053411b90070fd9900 mov dword ptr [0xb91134], 0x99fd70
// 00984fd8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000034@ns_ROCX000034@@YAXXZ)

namespace ns_ROCX000034 {
extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00893b60(int);
void fn_ROCX000034()
{
    G4_func_00893b60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
}
