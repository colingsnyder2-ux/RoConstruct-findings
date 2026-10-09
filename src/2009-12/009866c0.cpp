// roc 2009-12 009866c0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009866c0
//
// 009866c0  a1b43bb900           mov eax, dword ptr [0xb93bb4]
// 009866c5  50                   push eax
// 009866c6  e88fd1e6ff           call 0x7f385a
// 009866cb  83c404               add esp, 4
// 009866ce  c705983bb90070fd9900 mov dword ptr [0xb93b98], 0x99fd70
// 009866d8  c3                   ret 
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
