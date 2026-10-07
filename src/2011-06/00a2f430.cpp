// roc 2011-06 00a2f430  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f430
//
// 00a2f430  e8fbade2ff           call 0x85a230
// 00a2f435  50                   push eax
// 00a2f436  e8e3b5ddff           call 0x80aa1e
// 00a2f43b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f430();
extern int __stdcall G2_func_00a2f430(int);
int func_00a2f430()
{
    return G2_func_00a2f430(G1_func_00a2f430());
}
