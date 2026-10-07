// roc 2010-06 009e75d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e75d0
//
// 009e75d0  a1c80bc200           mov eax, dword ptr [0xc20bc8]
// 009e75d5  50                   push eax
// 009e75d6  e8bf03dcff           call 0x7a799a
// 009e75db  83c404               add esp, 4
// 009e75de  c705ac0bc2001809a000 mov dword ptr [0xc20bac], 0xa00918
// 009e75e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e75d0(int);
void func_009e75d0()
{
    G4_func_009e75d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
