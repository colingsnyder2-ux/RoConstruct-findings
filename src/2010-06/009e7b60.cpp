// roc 2010-06 009e7b60  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b60
//
// 009e7b60  a1f012c200           mov eax, dword ptr [0xc212f0]
// 009e7b65  50                   push eax
// 009e7b66  e82ffedbff           call 0x7a799a
// 009e7b6b  83c404               add esp, 4
// 009e7b6e  c705d412c2001809a000 mov dword ptr [0xc212d4], 0xa00918
// 009e7b78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7b60(int);
void func_009e7b60()
{
    G4_func_009e7b60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
