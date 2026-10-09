// roc 2009-12 00980150  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980150
//
// 00980150  a1ccffb700           mov eax, dword ptr [0xb7ffcc]
// 00980155  50                   push eax
// 00980156  e8ff36e7ff           call 0x7f385a
// 0098015b  83c404               add esp, 4
// 0098015e  c705b0ffb70070fd9900 mov dword ptr [0xb7ffb0], 0x99fd70
// 00980168  c3                   ret 
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
