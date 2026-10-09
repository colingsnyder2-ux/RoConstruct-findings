// roc 2009-12 00989390  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989390
//
// 00989390  a19873b900           mov eax, dword ptr [0xb97398]
// 00989395  50                   push eax
// 00989396  e8bfa4e6ff           call 0x7f385a
// 0098939b  83c404               add esp, 4
// 0098939e  c7057c73b90070fd9900 mov dword ptr [0xb9737c], 0x99fd70
// 009893a8  c3                   ret 
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
