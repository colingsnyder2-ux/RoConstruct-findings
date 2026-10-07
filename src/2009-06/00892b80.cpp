// roc 2009-06 00892b80  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b80
//
// 00892b80  e86bd1ecff           call 0x75fcf0
// 00892b85  50                   push eax
// 00892b86  e86d68e8ff           call 0x7193f8
// 00892b8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b80();
extern int __stdcall G2_func_00892b80(int);
int func_00892b80()
{
    return G2_func_00892b80(G1_func_00892b80());
}
