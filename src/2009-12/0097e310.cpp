// roc 2009-12 0097e310  unit: seg_00970000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097e310
//
// 0097e310  a130b0b700           mov eax, dword ptr [0xb7b030]
// 0097e315  50                   push eax
// 0097e316  e83f55e7ff           call 0x7f385a
// 0097e31b  83c404               add esp, 4
// 0097e31e  c70510b0b70070fd9900 mov dword ptr [0xb7b010], 0x99fd70
// 0097e328  c3                   ret 
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
