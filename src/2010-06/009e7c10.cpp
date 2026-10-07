// roc 2010-06 009e7c10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7c10
//
// 009e7c10  a1f813c200           mov eax, dword ptr [0xc213f8]
// 009e7c15  50                   push eax
// 009e7c16  e87ffddbff           call 0x7a799a
// 009e7c1b  83c404               add esp, 4
// 009e7c1e  c705dc13c2001809a000 mov dword ptr [0xc213dc], 0xa00918
// 009e7c28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7c10(int);
void func_009e7c10()
{
    G4_func_009e7c10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
