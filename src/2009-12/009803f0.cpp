// roc 2009-12 009803f0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009803f0
//
// 009803f0  a1ac04b800           mov eax, dword ptr [0xb804ac]
// 009803f5  50                   push eax
// 009803f6  e85f34e7ff           call 0x7f385a
// 009803fb  83c404               add esp, 4
// 009803fe  c7059004b80070fd9900 mov dword ptr [0xb80490], 0x99fd70
// 00980408  c3                   ret 
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
