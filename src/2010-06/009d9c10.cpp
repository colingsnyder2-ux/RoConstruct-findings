// roc 2010-06 009d9c10  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c10
//
// 009d9c10  e8db2ce2ff           call 0x7fc8f0
// 009d9c15  50                   push eax
// 009d9c16  e845e7dcff           call 0x7a8360
// 009d9c1b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c10();
extern int __stdcall G2_func_009d9c10(int);
int func_009d9c10()
{
    return G2_func_009d9c10(G1_func_009d9c10());
}
