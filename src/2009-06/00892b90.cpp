// roc 2009-06 00892b90  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b90
//
// 00892b90  e81befecff           call 0x761ab0
// 00892b95  50                   push eax
// 00892b96  e85d68e8ff           call 0x7193f8
// 00892b9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b90();
extern int __stdcall G2_func_00892b90(int);
int func_00892b90()
{
    return G2_func_00892b90(G1_func_00892b90());
}
