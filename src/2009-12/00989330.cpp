// roc 2009-12 00989330  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989330
//
// 00989330  a11073b900           mov eax, dword ptr [0xb97310]
// 00989335  50                   push eax
// 00989336  e81fa5e6ff           call 0x7f385a
// 0098933b  83c404               add esp, 4
// 0098933e  c705f072b90070fd9900 mov dword ptr [0xb972f0], 0x99fd70
// 00989348  c3                   ret 
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
