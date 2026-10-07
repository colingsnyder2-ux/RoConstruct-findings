// roc 2010-06 009e7590  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7590
//
// 009e7590  a1700ac200           mov eax, dword ptr [0xc20a70]
// 009e7595  50                   push eax
// 009e7596  e8ff03dcff           call 0x7a799a
// 009e759b  83c404               add esp, 4
// 009e759e  c705540ac2001809a000 mov dword ptr [0xc20a54], 0xa00918
// 009e75a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7590(int);
void func_009e7590()
{
    G4_func_009e7590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
