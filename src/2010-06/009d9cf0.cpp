// roc 2010-06 009d9cf0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9cf0
//
// 009d9cf0  e81beee6ff           call 0x848b10
// 009d9cf5  50                   push eax
// 009d9cf6  e865e6dcff           call 0x7a8360
// 009d9cfb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9cf0();
extern int __stdcall G2_func_009d9cf0(int);
int func_009d9cf0()
{
    return G2_func_009d9cf0(G1_func_009d9cf0());
}
