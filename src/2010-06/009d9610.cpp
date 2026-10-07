// roc 2010-06 009d9610  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9610
//
// 009d9610  e83b5ee0ff           call 0x7df450
// 009d9615  50                   push eax
// 009d9616  e845eddcff           call 0x7a8360
// 009d961b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9610();
extern int __stdcall G2_func_009d9610(int);
int func_009d9610()
{
    return G2_func_009d9610(G1_func_009d9610());
}
