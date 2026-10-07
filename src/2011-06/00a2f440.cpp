// roc 2011-06 00a2f440  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f440
//
// 00a2f440  e8fbade2ff           call 0x85a240
// 00a2f445  50                   push eax
// 00a2f446  e8d3b5ddff           call 0x80aa1e
// 00a2f44b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f440();
extern int __stdcall G2_func_00a2f440(int);
int func_00a2f440()
{
    return G2_func_00a2f440(G1_func_00a2f440());
}
