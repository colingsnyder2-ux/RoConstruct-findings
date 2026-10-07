// roc 2010-06 009d9ca0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9ca0
//
// 009d9ca0  e8dbaee4ff           call 0x824b80
// 009d9ca5  50                   push eax
// 009d9ca6  e8b5e6dcff           call 0x7a8360
// 009d9cab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9ca0();
extern int __stdcall G2_func_009d9ca0(int);
int func_009d9ca0()
{
    return G2_func_009d9ca0(G1_func_009d9ca0());
}
