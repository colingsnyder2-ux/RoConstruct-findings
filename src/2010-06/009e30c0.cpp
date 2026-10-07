// roc 2010-06 009e30c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e30c0
//
// 009e30c0  a1cca2c100           mov eax, dword ptr [0xc1a2cc]
// 009e30c5  50                   push eax
// 009e30c6  e8cf48dcff           call 0x7a799a
// 009e30cb  83c404               add esp, 4
// 009e30ce  c705b0a2c1001809a000 mov dword ptr [0xc1a2b0], 0xa00918
// 009e30d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e30c0(int);
void func_009e30c0()
{
    G4_func_009e30c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
