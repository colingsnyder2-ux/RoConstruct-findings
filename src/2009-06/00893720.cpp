// roc 2009-06 00893720  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893720
//
// 00893720  e8fb27f8ff           call 0x815f20
// 00893725  50                   push eax
// 00893726  e8cd5ce8ff           call 0x7193f8
// 0089372b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893720();
extern int __stdcall G2_func_00893720(int);
int func_00893720()
{
    return G2_func_00893720(G1_func_00893720());
}
