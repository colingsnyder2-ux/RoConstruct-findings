// roc 2010-06 009e7bd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7bd0
//
// 009e7bd0  a1cc13c200           mov eax, dword ptr [0xc213cc]
// 009e7bd5  50                   push eax
// 009e7bd6  e8bffddbff           call 0x7a799a
// 009e7bdb  83c404               add esp, 4
// 009e7bde  c705b013c2001809a000 mov dword ptr [0xc213b0], 0xa00918
// 009e7be8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7bd0(int);
void func_009e7bd0()
{
    G4_func_009e7bd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
