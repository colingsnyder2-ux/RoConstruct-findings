// roc 2009-12 009867a0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009867a0
//
// 009867a0  a13c36b900           mov eax, dword ptr [0xb9363c]
// 009867a5  50                   push eax
// 009867a6  e8afd0e6ff           call 0x7f385a
// 009867ab  83c404               add esp, 4
// 009867ae  c7052036b90070fd9900 mov dword ptr [0xb93620], 0x99fd70
// 009867b8  c3                   ret 
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
