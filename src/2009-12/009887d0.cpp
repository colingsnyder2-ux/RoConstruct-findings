// roc 2009-12 009887d0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009887d0
//
// 009887d0  a1d462b900           mov eax, dword ptr [0xb962d4]
// 009887d5  50                   push eax
// 009887d6  e87fb0e6ff           call 0x7f385a
// 009887db  83c404               add esp, 4
// 009887de  c705b862b90070fd9900 mov dword ptr [0xb962b8], 0x99fd70
// 009887e8  c3                   ret 
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
