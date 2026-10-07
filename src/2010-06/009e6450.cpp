// roc 2010-06 009e6450  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6450
//
// 009e6450  a184f8c100           mov eax, dword ptr [0xc1f884]
// 009e6455  50                   push eax
// 009e6456  e83f15dcff           call 0x7a799a
// 009e645b  83c404               add esp, 4
// 009e645e  c70568f8c1001809a000 mov dword ptr [0xc1f868], 0xa00918
// 009e6468  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6450(int);
void func_009e6450()
{
    G4_func_009e6450(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
