// roc 2009-12 009802d0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009802d0
//
// 009802d0  a14c00b800           mov eax, dword ptr [0xb8004c]
// 009802d5  50                   push eax
// 009802d6  e87f35e7ff           call 0x7f385a
// 009802db  83c404               add esp, 4
// 009802de  c7053000b80070fd9900 mov dword ptr [0xb80030], 0x99fd70
// 009802e8  c3                   ret 
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
