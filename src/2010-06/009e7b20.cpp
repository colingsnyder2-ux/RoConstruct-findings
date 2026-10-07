// roc 2010-06 009e7b20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b20
//
// 009e7b20  a1d012c200           mov eax, dword ptr [0xc212d0]
// 009e7b25  50                   push eax
// 009e7b26  e86ffedbff           call 0x7a799a
// 009e7b2b  83c404               add esp, 4
// 009e7b2e  c705b412c2001809a000 mov dword ptr [0xc212b4], 0xa00918
// 009e7b38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7b20(int);
void func_009e7b20()
{
    G4_func_009e7b20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
