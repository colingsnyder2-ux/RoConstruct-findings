// roc 2010-06 009da180  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da180
//
// 009da180  e87b41ecff           call 0x89e300
// 009da185  50                   push eax
// 009da186  e8d5e1dcff           call 0x7a8360
// 009da18b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da180();
extern int __stdcall G2_func_009da180(int);
int func_009da180()
{
    return G2_func_009da180(G1_func_009da180());
}
