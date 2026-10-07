// roc 2010-06 009d9c30  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c30
//
// 009d9c30  e86b2de2ff           call 0x7fc9a0
// 009d9c35  50                   push eax
// 009d9c36  e825e7dcff           call 0x7a8360
// 009d9c3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c30();
extern int __stdcall G2_func_009d9c30(int);
int func_009d9c30()
{
    return G2_func_009d9c30(G1_func_009d9c30());
}
