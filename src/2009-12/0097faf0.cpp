// roc 2009-12 0097faf0  unit: seg_00970000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097faf0
//
// 0097faf0  a1a4ebb700           mov eax, dword ptr [0xb7eba4]
// 0097faf5  50                   push eax
// 0097faf6  e85f3de7ff           call 0x7f385a
// 0097fafb  83c404               add esp, 4
// 0097fafe  c70588ebb70070fd9900 mov dword ptr [0xb7eb88], 0x99fd70
// 0097fb08  c3                   ret 
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
