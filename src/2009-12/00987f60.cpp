// roc 2009-12 00987f60  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00987f60
//
// 00987f60  a1305ab900           mov eax, dword ptr [0xb95a30]
// 00987f65  50                   push eax
// 00987f66  e8efb8e6ff           call 0x7f385a
// 00987f6b  83c404               add esp, 4
// 00987f6e  c705145ab90070fd9900 mov dword ptr [0xb95a14], 0x99fd70
// 00987f78  c3                   ret 
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
