// roc 2010-06 009e43e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e43e0
//
// 009e43e0  a1e4c9c100           mov eax, dword ptr [0xc1c9e4]
// 009e43e5  50                   push eax
// 009e43e6  e8af35dcff           call 0x7a799a
// 009e43eb  83c404               add esp, 4
// 009e43ee  c705c8c9c1001809a000 mov dword ptr [0xc1c9c8], 0xa00918
// 009e43f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e43e0(int);
void func_009e43e0()
{
    G4_func_009e43e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
