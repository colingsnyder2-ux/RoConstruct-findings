// roc 2010-06 009e7d90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d90
//
// 009e7d90  a1901ac200           mov eax, dword ptr [0xc21a90]
// 009e7d95  50                   push eax
// 009e7d96  e8fffbdbff           call 0x7a799a
// 009e7d9b  83c404               add esp, 4
// 009e7d9e  c705701ac2001809a000 mov dword ptr [0xc21a70], 0xa00918
// 009e7da8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7d90(int);
void func_009e7d90()
{
    G4_func_009e7d90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
