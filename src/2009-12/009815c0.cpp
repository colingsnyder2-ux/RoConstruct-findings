// roc 2009-12 009815c0  unit: seg_00980000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009815c0
//
// 009815c0  a1204db800           mov eax, dword ptr [0xb84d20]
// 009815c5  50                   push eax
// 009815c6  e88f22e7ff           call 0x7f385a
// 009815cb  83c404               add esp, 4
// 009815ce  c705044db80070fd9900 mov dword ptr [0xb84d04], 0x99fd70
// 009815d8  c3                   ret 
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
