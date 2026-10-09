// roc 2009-12 009870c0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009870c0
//
// 009870c0  a1ac47b900           mov eax, dword ptr [0xb947ac]
// 009870c5  50                   push eax
// 009870c6  e88fc7e6ff           call 0x7f385a
// 009870cb  83c404               add esp, 4
// 009870ce  c7059047b90070fd9900 mov dword ptr [0xb94790], 0x99fd70
// 009870d8  c3                   ret 
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
