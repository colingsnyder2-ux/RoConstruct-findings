// roc 2009-12 009866e0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009866e0
//
// 009866e0  a1b038b900           mov eax, dword ptr [0xb938b0]
// 009866e5  50                   push eax
// 009866e6  e86fd1e6ff           call 0x7f385a
// 009866eb  83c404               add esp, 4
// 009866ee  c7059438b90070fd9900 mov dword ptr [0xb93894], 0x99fd70
// 009866f8  c3                   ret 
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
