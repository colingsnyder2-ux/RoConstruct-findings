// roc 2009-12 00989590  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989590
//
// 00989590  a17875b900           mov eax, dword ptr [0xb97578]
// 00989595  50                   push eax
// 00989596  e8bfa2e6ff           call 0x7f385a
// 0098959b  83c404               add esp, 4
// 0098959e  c7055c75b90070fd9900 mov dword ptr [0xb9755c], 0x99fd70
// 009895a8  c3                   ret 
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
