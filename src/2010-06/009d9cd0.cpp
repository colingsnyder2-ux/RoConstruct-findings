// roc 2010-06 009d9cd0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9cd0
//
// 009d9cd0  e87ba6e6ff           call 0x844350
// 009d9cd5  50                   push eax
// 009d9cd6  e885e6dcff           call 0x7a8360
// 009d9cdb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9cd0();
extern int __stdcall G2_func_009d9cd0(int);
int func_009d9cd0()
{
    return G2_func_009d9cd0(G1_func_009d9cd0());
}
