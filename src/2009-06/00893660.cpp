// roc 2009-06 00893660  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893660
//
// 00893660  e84b78f5ff           call 0x7eaeb0
// 00893665  50                   push eax
// 00893666  e88d5de8ff           call 0x7193f8
// 0089366b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893660();
extern int __stdcall G2_func_00893660(int);
int func_00893660()
{
    return G2_func_00893660(G1_func_00893660());
}
