// roc 2010-06 009d94c0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d94c0
//
// 009d94c0  e80bb0ddff           call 0x7b44d0
// 009d94c5  50                   push eax
// 009d94c6  e895eedcff           call 0x7a8360
// 009d94cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d94c0();
extern int __stdcall G2_func_009d94c0(int);
int func_009d94c0()
{
    return G2_func_009d94c0(G1_func_009d94c0());
}
