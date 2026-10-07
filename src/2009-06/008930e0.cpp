// roc 2009-06 008930e0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930e0
//
// 008930e0  e86ba8edff           call 0x76d950
// 008930e5  50                   push eax
// 008930e6  e80d63e8ff           call 0x7193f8
// 008930eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930e0();
extern int __stdcall G2_func_008930e0(int);
int func_008930e0()
{
    return G2_func_008930e0(G1_func_008930e0());
}
