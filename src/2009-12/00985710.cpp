// roc 2009-12 00985710  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00985710
//
// 00985710  a1e41ab900           mov eax, dword ptr [0xb91ae4]
// 00985715  50                   push eax
// 00985716  e83fe1e6ff           call 0x7f385a
// 0098571b  83c404               add esp, 4
// 0098571e  c705c81ab90070fd9900 mov dword ptr [0xb91ac8], 0x99fd70
// 00985728  c3                   ret 
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
