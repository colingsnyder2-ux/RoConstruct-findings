// roc 2010-06 009e4bd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4bd0
//
// 009e4bd0  a1ccd1c100           mov eax, dword ptr [0xc1d1cc]
// 009e4bd5  50                   push eax
// 009e4bd6  e8bf2ddcff           call 0x7a799a
// 009e4bdb  83c404               add esp, 4
// 009e4bde  c705b0d1c1001809a000 mov dword ptr [0xc1d1b0], 0xa00918
// 009e4be8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4bd0(int);
void func_009e4bd0()
{
    G4_func_009e4bd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
