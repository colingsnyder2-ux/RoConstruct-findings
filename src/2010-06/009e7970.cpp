// roc 2010-06 009e7970  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7970
//
// 009e7970  a19410c200           mov eax, dword ptr [0xc21094]
// 009e7975  50                   push eax
// 009e7976  e81f00dcff           call 0x7a799a
// 009e797b  83c404               add esp, 4
// 009e797e  c7057410c2001809a000 mov dword ptr [0xc21074], 0xa00918
// 009e7988  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7970(int);
void func_009e7970()
{
    G4_func_009e7970(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
