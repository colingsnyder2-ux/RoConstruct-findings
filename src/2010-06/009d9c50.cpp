// roc 2010-06 009d9c50  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c50
//
// 009d9c50  e8bbf0e2ff           call 0x808d10
// 009d9c55  50                   push eax
// 009d9c56  e805e7dcff           call 0x7a8360
// 009d9c5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9c50();
extern int __stdcall G2_func_009d9c50(int);
int func_009d9c50()
{
    return G2_func_009d9c50(G1_func_009d9c50());
}
