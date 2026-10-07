// roc 2010-06 009d9c00  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c00
//
// 009d9c00  e89b2ce2ff           call 0x7fc8a0
// 009d9c05  50                   push eax
// 009d9c06  e855e7dcff           call 0x7a8360
// 009d9c0b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c00();
extern int __stdcall G2_func_009d9c00(int);
int func_009d9c00()
{
    return G2_func_009d9c00(G1_func_009d9c00());
}
