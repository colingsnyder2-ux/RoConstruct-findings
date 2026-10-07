// roc 2010-06 009d94a0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d94a0
//
// 009d94a0  e82babddff           call 0x7b3fd0
// 009d94a5  50                   push eax
// 009d94a6  e8b5eedcff           call 0x7a8360
// 009d94ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d94a0();
extern int __stdcall G2_func_009d94a0(int);
int func_009d94a0()
{
    return G2_func_009d94a0(G1_func_009d94a0());
}
