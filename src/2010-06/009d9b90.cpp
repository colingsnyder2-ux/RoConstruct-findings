// roc 2010-06 009d9b90  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9b90
//
// 009d9b90  e88bbee1ff           call 0x7f5a20
// 009d9b95  50                   push eax
// 009d9b96  e8c5e7dcff           call 0x7a8360
// 009d9b9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9b90();
extern int __stdcall G2_func_009d9b90(int);
int func_009d9b90()
{
    return G2_func_009d9b90(G1_func_009d9b90());
}
