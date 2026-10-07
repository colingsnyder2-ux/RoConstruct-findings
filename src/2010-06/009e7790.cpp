// roc 2010-06 009e7790  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7790
//
// 009e7790  a1cc0dc200           mov eax, dword ptr [0xc20dcc]
// 009e7795  50                   push eax
// 009e7796  e8ff01dcff           call 0x7a799a
// 009e779b  83c404               add esp, 4
// 009e779e  c705b00dc2001809a000 mov dword ptr [0xc20db0], 0xa00918
// 009e77a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7790(int);
void func_009e7790()
{
    G4_func_009e7790(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
