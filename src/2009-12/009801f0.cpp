// roc 2009-12 009801f0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009801f0
//
// 009801f0  a184ffb700           mov eax, dword ptr [0xb7ff84]
// 009801f5  50                   push eax
// 009801f6  e85f36e7ff           call 0x7f385a
// 009801fb  83c404               add esp, 4
// 009801fe  c70568ffb70070fd9900 mov dword ptr [0xb7ff68], 0x99fd70
// 00980208  c3                   ret 
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
