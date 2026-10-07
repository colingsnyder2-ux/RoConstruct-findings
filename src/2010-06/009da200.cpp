// roc 2010-06 009da200  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da200
//
// 009da200  e80bbaecff           call 0x8a5c10
// 009da205  50                   push eax
// 009da206  e855e1dcff           call 0x7a8360
// 009da20b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da200();
extern int __stdcall G2_func_009da200(int);
int func_009da200()
{
    return G2_func_009da200(G1_func_009da200());
}
