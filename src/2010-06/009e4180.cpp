// roc 2010-06 009e4180  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4180
//
// 009e4180  a1d4c4c100           mov eax, dword ptr [0xc1c4d4]
// 009e4185  50                   push eax
// 009e4186  e80f38dcff           call 0x7a799a
// 009e418b  83c404               add esp, 4
// 009e418e  c705b4c4c1001809a000 mov dword ptr [0xc1c4b4], 0xa00918
// 009e4198  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4180(int);
void func_009e4180()
{
    G4_func_009e4180(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
