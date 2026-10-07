// roc 2010-06 009d9cb0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9cb0
//
// 009d9cb0  e8db48e6ff           call 0x83e590
// 009d9cb5  50                   push eax
// 009d9cb6  e8a5e6dcff           call 0x7a8360
// 009d9cbb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9cb0();
extern int __stdcall G2_func_009d9cb0(int);
int func_009d9cb0()
{
    return G2_func_009d9cb0(G1_func_009d9cb0());
}
