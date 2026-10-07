// roc 2010-06 009e7a90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7a90
//
// 009e7a90  a1ec10c200           mov eax, dword ptr [0xc210ec]
// 009e7a95  50                   push eax
// 009e7a96  e8fffedbff           call 0x7a799a
// 009e7a9b  83c404               add esp, 4
// 009e7a9e  c705d010c2001809a000 mov dword ptr [0xc210d0], 0xa00918
// 009e7aa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7a90(int);
void func_009e7a90()
{
    G4_func_009e7a90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
