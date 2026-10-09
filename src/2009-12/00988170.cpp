// roc 2009-12 00988170  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00988170
//
// 00988170  a1485fb900           mov eax, dword ptr [0xb95f48]
// 00988175  50                   push eax
// 00988176  e8dfb6e6ff           call 0x7f385a
// 0098817b  83c404               add esp, 4
// 0098817e  c7052c5fb90070fd9900 mov dword ptr [0xb95f2c], 0x99fd70
// 00988188  c3                   ret 
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
