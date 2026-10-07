// roc 2010-06 009e5ac0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ac0
//
// 009e5ac0  a194eac100           mov eax, dword ptr [0xc1ea94]
// 009e5ac5  50                   push eax
// 009e5ac6  e8cf1edcff           call 0x7a799a
// 009e5acb  83c404               add esp, 4
// 009e5ace  c70574eac1001809a000 mov dword ptr [0xc1ea74], 0xa00918
// 009e5ad8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ac0(int);
void func_009e5ac0()
{
    G4_func_009e5ac0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
