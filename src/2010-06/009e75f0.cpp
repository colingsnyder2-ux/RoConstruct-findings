// roc 2010-06 009e75f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e75f0
//
// 009e75f0  a1a80bc200           mov eax, dword ptr [0xc20ba8]
// 009e75f5  50                   push eax
// 009e75f6  e89f03dcff           call 0x7a799a
// 009e75fb  83c404               add esp, 4
// 009e75fe  c7058c0bc2001809a000 mov dword ptr [0xc20b8c], 0xa00918
// 009e7608  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e75f0(int);
void func_009e75f0()
{
    G4_func_009e75f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
