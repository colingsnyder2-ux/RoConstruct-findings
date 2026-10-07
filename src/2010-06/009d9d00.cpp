// roc 2010-06 009d9d00  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9d00
//
// 009d9d00  e83bf0e6ff           call 0x848d40
// 009d9d05  50                   push eax
// 009d9d06  e855e6dcff           call 0x7a8360
// 009d9d0b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9d00();
extern int __stdcall G2_func_009d9d00(int);
int func_009d9d00()
{
    return G2_func_009d9d00(G1_func_009d9d00());
}
