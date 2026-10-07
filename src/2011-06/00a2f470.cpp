// roc 2011-06 00a2f470  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f470
//
// 00a2f470  e8fbaee2ff           call 0x85a370
// 00a2f475  50                   push eax
// 00a2f476  e8a3b5ddff           call 0x80aa1e
// 00a2f47b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f470();
extern int __stdcall G2_func_00a2f470(int);
int func_00a2f470()
{
    return G2_func_00a2f470(G1_func_00a2f470());
}
