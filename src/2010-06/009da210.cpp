// roc 2010-06 009da210  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da210
//
// 009da210  e83bbaecff           call 0x8a5c50
// 009da215  50                   push eax
// 009da216  e845e1dcff           call 0x7a8360
// 009da21b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da210();
extern int __stdcall G2_func_009da210(int);
int func_009da210()
{
    return G2_func_009da210(G1_func_009da210());
}
