// roc 2009-12 009875e0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009875e0
//
// 009875e0  a1304cb900           mov eax, dword ptr [0xb94c30]
// 009875e5  50                   push eax
// 009875e6  e86fc2e6ff           call 0x7f385a
// 009875eb  83c404               add esp, 4
// 009875ee  c705144cb90070fd9900 mov dword ptr [0xb94c14], 0x99fd70
// 009875f8  c3                   ret 
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
