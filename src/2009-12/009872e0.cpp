// roc 2009-12 009872e0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009872e0
//
// 009872e0  a17849b900           mov eax, dword ptr [0xb94978]
// 009872e5  50                   push eax
// 009872e6  e86fc5e6ff           call 0x7f385a
// 009872eb  83c404               add esp, 4
// 009872ee  c7055c49b90070fd9900 mov dword ptr [0xb9495c], 0x99fd70
// 009872f8  c3                   ret 
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
