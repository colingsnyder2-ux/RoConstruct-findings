// roc 2010-06 009e3770  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3770
//
// 009e3770  a1f8b1c100           mov eax, dword ptr [0xc1b1f8]
// 009e3775  50                   push eax
// 009e3776  e81f42dcff           call 0x7a799a
// 009e377b  83c404               add esp, 4
// 009e377e  c705dcb1c1001809a000 mov dword ptr [0xc1b1dc], 0xa00918
// 009e3788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3770(int);
void func_009e3770()
{
    G4_func_009e3770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
