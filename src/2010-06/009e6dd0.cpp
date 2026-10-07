// roc 2010-06 009e6dd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6dd0
//
// 009e6dd0  a1a802c200           mov eax, dword ptr [0xc202a8]
// 009e6dd5  50                   push eax
// 009e6dd6  e8bf0bdcff           call 0x7a799a
// 009e6ddb  83c404               add esp, 4
// 009e6dde  c7058c02c2001809a000 mov dword ptr [0xc2028c], 0xa00918
// 009e6de8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6dd0(int);
void func_009e6dd0()
{
    G4_func_009e6dd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
