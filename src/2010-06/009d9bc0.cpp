// roc 2010-06 009d9bc0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9bc0
//
// 009d9bc0  e80b2ce2ff           call 0x7fc7d0
// 009d9bc5  50                   push eax
// 009d9bc6  e895e7dcff           call 0x7a8360
// 009d9bcb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9bc0();
extern int __stdcall G2_func_009d9bc0(int);
int func_009d9bc0()
{
    return G2_func_009d9bc0(G1_func_009d9bc0());
}
