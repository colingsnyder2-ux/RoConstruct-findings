// roc 2009-12 00989a70  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00989a70
//
// 00989a70  a16c7fb900           mov eax, dword ptr [0xb97f6c]
// 00989a75  50                   push eax
// 00989a76  e8df9de6ff           call 0x7f385a
// 00989a7b  83c404               add esp, 4
// 00989a7e  c705507fb90070fd9900 mov dword ptr [0xb97f50], 0x99fd70
// 00989a88  c3                   ret 
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
