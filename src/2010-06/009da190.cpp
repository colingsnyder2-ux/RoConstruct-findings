// roc 2010-06 009da190  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da190
//
// 009da190  e8bb50ecff           call 0x89f250
// 009da195  50                   push eax
// 009da196  e8c5e1dcff           call 0x7a8360
// 009da19b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da190();
extern int __stdcall G2_func_009da190(int);
int func_009da190()
{
    return G2_func_009da190(G1_func_009da190());
}
