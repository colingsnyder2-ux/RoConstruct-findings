// roc 2009-12 00981060  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00981060
//
// 00981060  a1cc4eb800           mov eax, dword ptr [0xb84ecc]
// 00981065  50                   push eax
// 00981066  e8ef27e7ff           call 0x7f385a
// 0098106b  83c404               add esp, 4
// 0098106e  c705b04eb80070fd9900 mov dword ptr [0xb84eb0], 0x99fd70
// 00981078  c3                   ret 
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
