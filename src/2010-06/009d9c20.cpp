// roc 2010-06 009d9c20  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c20
//
// 009d9c20  e83b2de2ff           call 0x7fc960
// 009d9c25  50                   push eax
// 009d9c26  e835e7dcff           call 0x7a8360
// 009d9c2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c20();
extern int __stdcall G2_func_009d9c20(int);
int func_009d9c20()
{
    return G2_func_009d9c20(G1_func_009d9c20());
}
