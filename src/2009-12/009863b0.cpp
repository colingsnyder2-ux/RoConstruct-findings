// roc 2009-12 009863b0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009863b0
//
// 009863b0  a1e832b900           mov eax, dword ptr [0xb932e8]
// 009863b5  50                   push eax
// 009863b6  e89fd4e6ff           call 0x7f385a
// 009863bb  83c404               add esp, 4
// 009863be  c705cc32b90070fd9900 mov dword ptr [0xb932cc], 0x99fd70
// 009863c8  c3                   ret 
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
