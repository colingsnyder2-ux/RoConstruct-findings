// roc 2010-06 009e85a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e85a0
//
// 009e85a0  a1ec21c200           mov eax, dword ptr [0xc221ec]
// 009e85a5  50                   push eax
// 009e85a6  e8eff3dbff           call 0x7a799a
// 009e85ab  83c404               add esp, 4
// 009e85ae  c705d021c2001809a000 mov dword ptr [0xc221d0], 0xa00918
// 009e85b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e85a0(int);
void func_009e85a0()
{
    G4_func_009e85a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
