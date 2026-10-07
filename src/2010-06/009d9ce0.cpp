// roc 2010-06 009d9ce0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9ce0
//
// 009d9ce0  e81bd1e6ff           call 0x846e00
// 009d9ce5  50                   push eax
// 009d9ce6  e875e6dcff           call 0x7a8360
// 009d9ceb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9ce0();
extern int __stdcall G2_func_009d9ce0(int);
int func_009d9ce0()
{
    return G2_func_009d9ce0(G1_func_009d9ce0());
}
