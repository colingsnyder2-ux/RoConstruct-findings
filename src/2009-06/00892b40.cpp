// roc 2009-06 00892b40  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b40
//
// 00892b40  e87bdbebff           call 0x7506c0
// 00892b45  50                   push eax
// 00892b46  e8ad68e8ff           call 0x7193f8
// 00892b4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b40();
extern int __stdcall G2_func_00892b40(int);
int func_00892b40()
{
    return G2_func_00892b40(G1_func_00892b40());
}
