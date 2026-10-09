// roc 2009-12 009801d0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009801d0
//
// 009801d0  a18c00b800           mov eax, dword ptr [0xb8008c]
// 009801d5  50                   push eax
// 009801d6  e87f36e7ff           call 0x7f385a
// 009801db  83c404               add esp, 4
// 009801de  c7057000b80070fd9900 mov dword ptr [0xb80070], 0x99fd70
// 009801e8  c3                   ret 
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
