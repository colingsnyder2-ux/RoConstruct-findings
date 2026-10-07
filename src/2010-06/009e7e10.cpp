// roc 2010-06 009e7e10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7e10
//
// 009e7e10  a12c1cc200           mov eax, dword ptr [0xc21c2c]
// 009e7e15  50                   push eax
// 009e7e16  e87ffbdbff           call 0x7a799a
// 009e7e1b  83c404               add esp, 4
// 009e7e1e  c705101cc2001809a000 mov dword ptr [0xc21c10], 0xa00918
// 009e7e28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7e10(int);
void func_009e7e10()
{
    G4_func_009e7e10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
