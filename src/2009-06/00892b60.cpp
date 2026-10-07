// roc 2009-06 00892b60  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b60
//
// 00892b60  e87bddebff           call 0x7508e0
// 00892b65  50                   push eax
// 00892b66  e88d68e8ff           call 0x7193f8
// 00892b6b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b60();
extern int __stdcall G2_func_00892b60(int);
int func_00892b60()
{
    return G2_func_00892b60(G1_func_00892b60());
}
