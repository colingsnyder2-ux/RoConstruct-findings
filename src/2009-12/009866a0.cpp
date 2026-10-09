// roc 2009-12 009866a0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009866a0
//
// 009866a0  a1fc37b900           mov eax, dword ptr [0xb937fc]
// 009866a5  50                   push eax
// 009866a6  e8afd1e6ff           call 0x7f385a
// 009866ab  83c404               add esp, 4
// 009866ae  c705e037b90070fd9900 mov dword ptr [0xb937e0], 0x99fd70
// 009866b8  c3                   ret 
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
