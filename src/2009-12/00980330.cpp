// roc 2009-12 00980330  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980330
//
// 00980330  a1d4feb700           mov eax, dword ptr [0xb7fed4]
// 00980335  50                   push eax
// 00980336  e81f35e7ff           call 0x7f385a
// 0098033b  83c404               add esp, 4
// 0098033e  c705b8feb70070fd9900 mov dword ptr [0xb7feb8], 0x99fd70
// 00980348  c3                   ret 
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
