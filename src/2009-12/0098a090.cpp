// roc 2009-12 0098a090  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a090
//
// 0098a090  a15483b900           mov eax, dword ptr [0xb98354]
// 0098a095  50                   push eax
// 0098a096  e8bf97e6ff           call 0x7f385a
// 0098a09b  83c404               add esp, 4
// 0098a09e  c7053883b90070fd9900 mov dword ptr [0xb98338], 0x99fd70
// 0098a0a8  c3                   ret 
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
