// roc 2010-06 009e7750  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7750
//
// 009e7750  a1400dc200           mov eax, dword ptr [0xc20d40]
// 009e7755  50                   push eax
// 009e7756  e83f02dcff           call 0x7a799a
// 009e775b  83c404               add esp, 4
// 009e775e  c705240dc2001809a000 mov dword ptr [0xc20d24], 0xa00918
// 009e7768  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7750(int);
void func_009e7750()
{
    G4_func_009e7750(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
