// roc 2010-06 009d94b0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d94b0
//
// 009d94b0  e8abaeddff           call 0x7b4360
// 009d94b5  50                   push eax
// 009d94b6  e8a5eedcff           call 0x7a8360
// 009d94bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d94b0();
extern int __stdcall G2_func_009d94b0(int);
int func_009d94b0()
{
    return G2_func_009d94b0(G1_func_009d94b0());
}
