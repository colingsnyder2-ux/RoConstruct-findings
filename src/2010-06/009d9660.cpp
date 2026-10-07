// roc 2010-06 009d9660  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9660
//
// 009d9660  e8ab55e1ff           call 0x7eec10
// 009d9665  50                   push eax
// 009d9666  e8f5ecdcff           call 0x7a8360
// 009d966b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9660();
extern int __stdcall G2_func_009d9660(int);
int func_009d9660()
{
    return G2_func_009d9660(G1_func_009d9660());
}
