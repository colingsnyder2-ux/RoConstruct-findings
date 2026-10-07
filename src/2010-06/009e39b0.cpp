// roc 2010-06 009e39b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e39b0
//
// 009e39b0  a1ecb3c100           mov eax, dword ptr [0xc1b3ec]
// 009e39b5  50                   push eax
// 009e39b6  e8df3fdcff           call 0x7a799a
// 009e39bb  83c404               add esp, 4
// 009e39be  c705d0b3c1001809a000 mov dword ptr [0xc1b3d0], 0xa00918
// 009e39c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e39b0(int);
void func_009e39b0()
{
    G4_func_009e39b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
