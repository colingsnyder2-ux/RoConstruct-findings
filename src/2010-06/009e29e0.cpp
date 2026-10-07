// roc 2010-06 009e29e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e29e0
//
// 009e29e0  a1d09ac100           mov eax, dword ptr [0xc19ad0]
// 009e29e5  50                   push eax
// 009e29e6  e8af4fdcff           call 0x7a799a
// 009e29eb  83c404               add esp, 4
// 009e29ee  c705b49ac1001809a000 mov dword ptr [0xc19ab4], 0xa00918
// 009e29f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e29e0(int);
void func_009e29e0()
{
    G4_func_009e29e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
