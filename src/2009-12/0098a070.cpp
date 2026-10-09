// roc 2009-12 0098a070  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a070
//
// 0098a070  a17885b900           mov eax, dword ptr [0xb98578]
// 0098a075  50                   push eax
// 0098a076  e8df97e6ff           call 0x7f385a
// 0098a07b  83c404               add esp, 4
// 0098a07e  c7055c85b90070fd9900 mov dword ptr [0xb9855c], 0x99fd70
// 0098a088  c3                   ret 
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
