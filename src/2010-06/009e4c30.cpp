// roc 2010-06 009e4c30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4c30
//
// 009e4c30  a134d3c100           mov eax, dword ptr [0xc1d334]
// 009e4c35  50                   push eax
// 009e4c36  e85f2ddcff           call 0x7a799a
// 009e4c3b  83c404               add esp, 4
// 009e4c3e  c70518d3c1001809a000 mov dword ptr [0xc1d318], 0xa00918
// 009e4c48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4c30(int);
void func_009e4c30()
{
    G4_func_009e4c30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
