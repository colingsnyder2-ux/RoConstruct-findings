// roc 2010-06 009d9580  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9580
//
// 009d9580  e82b4cdfff           call 0x7ce1b0
// 009d9585  50                   push eax
// 009d9586  e8d5eddcff           call 0x7a8360
// 009d958b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9580();
extern int __stdcall G2_func_009d9580(int);
int func_009d9580()
{
    return G2_func_009d9580(G1_func_009d9580());
}
