// roc 2009-12 009881f0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009881f0
//
// 009881f0  a1e460b900           mov eax, dword ptr [0xb960e4]
// 009881f5  50                   push eax
// 009881f6  e85fb6e6ff           call 0x7f385a
// 009881fb  83c404               add esp, 4
// 009881fe  c705c860b90070fd9900 mov dword ptr [0xb960c8], 0x99fd70
// 00988208  c3                   ret 
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
