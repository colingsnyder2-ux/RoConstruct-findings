// roc 2010-06 009e7770  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7770
//
// 009e7770  a1a00dc200           mov eax, dword ptr [0xc20da0]
// 009e7775  50                   push eax
// 009e7776  e81f02dcff           call 0x7a799a
// 009e777b  83c404               add esp, 4
// 009e777e  c705840dc2001809a000 mov dword ptr [0xc20d84], 0xa00918
// 009e7788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7770(int);
void func_009e7770()
{
    G4_func_009e7770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
