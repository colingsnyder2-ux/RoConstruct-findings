// roc 2009-12 0098a030  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a030
//
// 0098a030  a19885b900           mov eax, dword ptr [0xb98598]
// 0098a035  50                   push eax
// 0098a036  e81f98e6ff           call 0x7f385a
// 0098a03b  83c404               add esp, 4
// 0098a03e  c7057c85b90070fd9900 mov dword ptr [0xb9857c], 0x99fd70
// 0098a048  c3                   ret 
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
