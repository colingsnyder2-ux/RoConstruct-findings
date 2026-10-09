// roc 2009-12 009894d0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009894d0
//
// 009894d0  a1c075b900           mov eax, dword ptr [0xb975c0]
// 009894d5  50                   push eax
// 009894d6  e87fa3e6ff           call 0x7f385a
// 009894db  83c404               add esp, 4
// 009894de  c705a075b90070fd9900 mov dword ptr [0xb975a0], 0x99fd70
// 009894e8  c3                   ret 
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
