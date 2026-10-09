// roc 2009-12 00981540  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00981540
//
// 00981540  a1784cb800           mov eax, dword ptr [0xb84c78]
// 00981545  50                   push eax
// 00981546  e80f23e7ff           call 0x7f385a
// 0098154b  83c404               add esp, 4
// 0098154e  c7055c4cb80070fd9900 mov dword ptr [0xb84c5c], 0x99fd70
// 00981558  c3                   ret 
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
