// roc 2010-06 009da230  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da230
//
// 009da230  e82bbbecff           call 0x8a5d60
// 009da235  50                   push eax
// 009da236  e825e1dcff           call 0x7a8360
// 009da23b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da230();
extern int __stdcall G2_func_009da230(int);
int func_009da230()
{
    return G2_func_009da230(G1_func_009da230());
}
