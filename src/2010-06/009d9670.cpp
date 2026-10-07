// roc 2010-06 009d9670  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9670
//
// 009d9670  e86b73e1ff           call 0x7f09e0
// 009d9675  50                   push eax
// 009d9676  e8e5ecdcff           call 0x7a8360
// 009d967b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9670();
extern int __stdcall G2_func_009d9670(int);
int func_009d9670()
{
    return G2_func_009d9670(G1_func_009d9670());
}
