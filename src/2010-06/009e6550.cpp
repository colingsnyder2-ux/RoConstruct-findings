// roc 2010-06 009e6550  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6550
//
// 009e6550  a1dcf6c100           mov eax, dword ptr [0xc1f6dc]
// 009e6555  50                   push eax
// 009e6556  e83f14dcff           call 0x7a799a
// 009e655b  83c404               add esp, 4
// 009e655e  c705c0f6c1001809a000 mov dword ptr [0xc1f6c0], 0xa00918
// 009e6568  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6550(int);
void func_009e6550()
{
    G4_func_009e6550(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
