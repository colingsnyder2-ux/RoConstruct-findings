// roc 2009-12 00984cd0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984cd0
//
// 00984cd0  a1cc0cb900           mov eax, dword ptr [0xb90ccc]
// 00984cd5  50                   push eax
// 00984cd6  e87febe6ff           call 0x7f385a
// 00984cdb  83c404               add esp, 4
// 00984cde  c705ac0cb90070fd9900 mov dword ptr [0xb90cac], 0x99fd70
// 00984ce8  c3                   ret 
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
