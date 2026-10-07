// roc 2010-06 009e5b80  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5b80
//
// 009e5b80  a19cecc100           mov eax, dword ptr [0xc1ec9c]
// 009e5b85  50                   push eax
// 009e5b86  e80f1edcff           call 0x7a799a
// 009e5b8b  83c404               add esp, 4
// 009e5b8e  c70580ecc1001809a000 mov dword ptr [0xc1ec80], 0xa00918
// 009e5b98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5b80(int);
void func_009e5b80()
{
    G4_func_009e5b80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
