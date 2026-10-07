// roc 2011-06 00a2f480  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f480
//
// 00a2f480  e82bafe2ff           call 0x85a3b0
// 00a2f485  50                   push eax
// 00a2f486  e893b5ddff           call 0x80aa1e
// 00a2f48b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f480();
extern int __stdcall G2_func_00a2f480(int);
int func_00a2f480()
{
    return G2_func_00a2f480(G1_func_00a2f480());
}
