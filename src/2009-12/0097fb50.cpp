// roc 2009-12 0097fb50  unit: seg_00970000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097fb50
//
// 0097fb50  a1cceeb700           mov eax, dword ptr [0xb7eecc]
// 0097fb55  50                   push eax
// 0097fb56  e8ff3ce7ff           call 0x7f385a
// 0097fb5b  83c404               add esp, 4
// 0097fb5e  c705b0eeb70070fd9900 mov dword ptr [0xb7eeb0], 0x99fd70
// 0097fb68  c3                   ret 
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
