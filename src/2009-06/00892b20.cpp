// roc 2009-06 00892b20  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b20
//
// 00892b20  e81bd4ebff           call 0x74ff40
// 00892b25  50                   push eax
// 00892b26  e8cd68e8ff           call 0x7193f8
// 00892b2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b20();
extern int __stdcall G2_func_00892b20(int);
int func_00892b20()
{
    return G2_func_00892b20(G1_func_00892b20());
}
