// roc 2010-06 009e4c90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4c90
//
// 009e4c90  a1d4d5c100           mov eax, dword ptr [0xc1d5d4]
// 009e4c95  50                   push eax
// 009e4c96  e8ff2cdcff           call 0x7a799a
// 009e4c9b  83c404               add esp, 4
// 009e4c9e  c705b8d5c1001809a000 mov dword ptr [0xc1d5b8], 0xa00918
// 009e4ca8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4c90(int);
void func_009e4c90()
{
    G4_func_009e4c90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
