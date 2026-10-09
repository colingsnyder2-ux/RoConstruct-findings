// roc 2009-12 00989510  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989510
//
// 00989510  a19c75b900           mov eax, dword ptr [0xb9759c]
// 00989515  50                   push eax
// 00989516  e83fa3e6ff           call 0x7f385a
// 0098951b  83c404               add esp, 4
// 0098951e  c7058075b90070fd9900 mov dword ptr [0xb97580], 0x99fd70
// 00989528  c3                   ret 
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
