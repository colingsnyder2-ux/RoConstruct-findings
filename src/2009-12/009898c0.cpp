// roc 2009-12 009898c0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009898c0
//
// 009898c0  a1ac7ab900           mov eax, dword ptr [0xb97aac]
// 009898c5  50                   push eax
// 009898c6  e88f9fe6ff           call 0x7f385a
// 009898cb  83c404               add esp, 4
// 009898ce  c7058c7ab90070fd9900 mov dword ptr [0xb97a8c], 0x99fd70
// 009898d8  c3                   ret 
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
