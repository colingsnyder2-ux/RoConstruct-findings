// roc 2010-06 009d9bf0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9bf0
//
// 009d9bf0  e83b2ce2ff           call 0x7fc830
// 009d9bf5  50                   push eax
// 009d9bf6  e865e7dcff           call 0x7a8360
// 009d9bfb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9bf0();
extern int __stdcall G2_func_009d9bf0(int);
int func_009d9bf0()
{
    return G2_func_009d9bf0(G1_func_009d9bf0());
}
