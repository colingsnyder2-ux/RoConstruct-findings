// roc 2009-12 0097d880  unit: seg_00970000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d880
//
// 0097d880  a168a0b700           mov eax, dword ptr [0xb7a068]
// 0097d885  50                   push eax
// 0097d886  e8cf5fe7ff           call 0x7f385a
// 0097d88b  83c404               add esp, 4
// 0097d88e  c7054ca0b70070fd9900 mov dword ptr [0xb7a04c], 0x99fd70
// 0097d898  c3                   ret 
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
