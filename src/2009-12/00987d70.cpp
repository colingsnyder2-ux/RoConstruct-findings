// roc 2009-12 00987d70  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00987d70
//
// 00987d70  a18c56b900           mov eax, dword ptr [0xb9568c]
// 00987d75  50                   push eax
// 00987d76  e8dfbae6ff           call 0x7f385a
// 00987d7b  83c404               add esp, 4
// 00987d7e  c7057056b90070fd9900 mov dword ptr [0xb95670], 0x99fd70
// 00987d88  c3                   ret 
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
