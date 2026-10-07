// roc 2009-06 008936e0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008936e0
//
// 008936e0  e88b26f8ff           call 0x815d70
// 008936e5  50                   push eax
// 008936e6  e80d5de8ff           call 0x7193f8
// 008936eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008936e0();
extern int __stdcall G2_func_008936e0(int);
int func_008936e0()
{
    return G2_func_008936e0(G1_func_008936e0());
}
