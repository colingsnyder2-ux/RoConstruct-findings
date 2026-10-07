// roc 2010-06 009d9520  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9520
//
// 009d9520  e8abbcdeff           call 0x7c51d0
// 009d9525  50                   push eax
// 009d9526  e835eedcff           call 0x7a8360
// 009d952b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9520();
extern int __stdcall G2_func_009d9520(int);
int func_009d9520()
{
    return G2_func_009d9520(G1_func_009d9520());
}
