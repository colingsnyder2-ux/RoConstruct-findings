// roc 2009-06 00892b30  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b30
//
// 00892b30  e8dbdaebff           call 0x750610
// 00892b35  50                   push eax
// 00892b36  e8bd68e8ff           call 0x7193f8
// 00892b3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b30();
extern int __stdcall G2_func_00892b30(int);
int func_00892b30()
{
    return G2_func_00892b30(G1_func_00892b30());
}
