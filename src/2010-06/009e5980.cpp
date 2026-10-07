// roc 2010-06 009e5980  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5980
//
// 009e5980  a1fce9c100           mov eax, dword ptr [0xc1e9fc]
// 009e5985  50                   push eax
// 009e5986  e80f20dcff           call 0x7a799a
// 009e598b  83c404               add esp, 4
// 009e598e  c705e0e9c1001809a000 mov dword ptr [0xc1e9e0], 0xa00918
// 009e5998  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5980(int);
void func_009e5980()
{
    G4_func_009e5980(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
