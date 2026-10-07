// roc 2010-06 009d9ba0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9ba0
//
// 009d9ba0  e8bbc3e1ff           call 0x7f5f60
// 009d9ba5  50                   push eax
// 009d9ba6  e8b5e7dcff           call 0x7a8360
// 009d9bab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9ba0();
extern int __stdcall G2_func_009d9ba0(int);
int func_009d9ba0()
{
    return G2_func_009d9ba0(G1_func_009d9ba0());
}
