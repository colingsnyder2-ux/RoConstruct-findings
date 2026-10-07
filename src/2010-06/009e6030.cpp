// roc 2010-06 009e6030  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6030
//
// 009e6030  a174f3c100           mov eax, dword ptr [0xc1f374]
// 009e6035  50                   push eax
// 009e6036  e85f19dcff           call 0x7a799a
// 009e603b  83c404               add esp, 4
// 009e603e  c70558f3c1001809a000 mov dword ptr [0xc1f358], 0xa00918
// 009e6048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6030(int);
void func_009e6030()
{
    G4_func_009e6030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
