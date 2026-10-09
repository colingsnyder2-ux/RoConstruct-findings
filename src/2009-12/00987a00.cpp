// roc 2009-12 00987a00  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00987a00
//
// 00987a00  a12454b900           mov eax, dword ptr [0xb95424]
// 00987a05  50                   push eax
// 00987a06  e84fbee6ff           call 0x7f385a
// 00987a0b  83c404               add esp, 4
// 00987a0e  c7050854b90070fd9900 mov dword ptr [0xb95408], 0x99fd70
// 00987a18  c3                   ret 
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
