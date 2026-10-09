// roc 2009-12 00985120  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00985120
//
// 00985120  a17413b900           mov eax, dword ptr [0xb91374]
// 00985125  50                   push eax
// 00985126  e82fe7e6ff           call 0x7f385a
// 0098512b  83c404               add esp, 4
// 0098512e  c7055813b90070fd9900 mov dword ptr [0xb91358], 0x99fd70
// 00985138  c3                   ret 
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
