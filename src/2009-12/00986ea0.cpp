// roc 2009-12 00986ea0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00986ea0
//
// 00986ea0  a15844b900           mov eax, dword ptr [0xb94458]
// 00986ea5  50                   push eax
// 00986ea6  e8afc9e6ff           call 0x7f385a
// 00986eab  83c404               add esp, 4
// 00986eae  c7053844b90070fd9900 mov dword ptr [0xb94438], 0x99fd70
// 00986eb8  c3                   ret 
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
