// roc 2010-06 009d9be0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9be0
//
// 009d9be0  e82b2ce2ff           call 0x7fc810
// 009d9be5  50                   push eax
// 009d9be6  e875e7dcff           call 0x7a8360
// 009d9beb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9be0();
extern int __stdcall G2_func_009d9be0(int);
int func_009d9be0()
{
    return G2_func_009d9be0(G1_func_009d9be0());
}
