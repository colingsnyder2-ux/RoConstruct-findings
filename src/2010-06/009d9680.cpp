// roc 2010-06 009d9680  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9680
//
// 009d9680  e82b74e1ff           call 0x7f0ab0
// 009d9685  50                   push eax
// 009d9686  e8d5ecdcff           call 0x7a8360
// 009d968b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9680();
extern int __stdcall G2_func_009d9680(int);
int func_009d9680()
{
    return G2_func_009d9680(G1_func_009d9680());
}
