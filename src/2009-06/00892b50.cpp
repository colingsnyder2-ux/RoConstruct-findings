// roc 2009-06 00892b50  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b50
//
// 00892b50  e8ebdcebff           call 0x750840
// 00892b55  50                   push eax
// 00892b56  e89d68e8ff           call 0x7193f8
// 00892b5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b50();
extern int __stdcall G2_func_00892b50(int);
int func_00892b50()
{
    return G2_func_00892b50(G1_func_00892b50());
}
