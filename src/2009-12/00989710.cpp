// roc 2009-12 00989710  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989710
//
// 00989710  a15077b900           mov eax, dword ptr [0xb97750]
// 00989715  50                   push eax
// 00989716  e83fa1e6ff           call 0x7f385a
// 0098971b  83c404               add esp, 4
// 0098971e  c7053477b90070fd9900 mov dword ptr [0xb97734], 0x99fd70
// 00989728  c3                   ret 
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
