// roc 2010-06 009da170  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da170
//
// 009da170  e8db3eecff           call 0x89e050
// 009da175  50                   push eax
// 009da176  e8e5e1dcff           call 0x7a8360
// 009da17b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da170();
extern int __stdcall G2_func_009da170(int);
int func_009da170()
{
    return G2_func_009da170(G1_func_009da170());
}
