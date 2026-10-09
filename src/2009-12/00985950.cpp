// roc 2009-12 00985950  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00985950
//
// 00985950  a1f820b900           mov eax, dword ptr [0xb920f8]
// 00985955  50                   push eax
// 00985956  e8ffdee6ff           call 0x7f385a
// 0098595b  83c404               add esp, 4
// 0098595e  c705dc20b90070fd9900 mov dword ptr [0xb920dc], 0x99fd70
// 00985968  c3                   ret 
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
