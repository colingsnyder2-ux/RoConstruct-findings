// roc 2010-06 009e2fc0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2fc0
//
// 009e2fc0  a1bca4c100           mov eax, dword ptr [0xc1a4bc]
// 009e2fc5  50                   push eax
// 009e2fc6  e8cf49dcff           call 0x7a799a
// 009e2fcb  83c404               add esp, 4
// 009e2fce  c705a0a4c1001809a000 mov dword ptr [0xc1a4a0], 0xa00918
// 009e2fd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2fc0(int);
void func_009e2fc0()
{
    G4_func_009e2fc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
