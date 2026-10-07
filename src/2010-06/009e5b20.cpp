// roc 2010-06 009e5b20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5b20
//
// 009e5b20  a1e0ecc100           mov eax, dword ptr [0xc1ece0]
// 009e5b25  50                   push eax
// 009e5b26  e86f1edcff           call 0x7a799a
// 009e5b2b  83c404               add esp, 4
// 009e5b2e  c705c4ecc1001809a000 mov dword ptr [0xc1ecc4], 0xa00918
// 009e5b38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5b20(int);
void func_009e5b20()
{
    G4_func_009e5b20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
