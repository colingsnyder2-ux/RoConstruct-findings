// roc 2011-06 00a2f450  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f450
//
// 00a2f450  e85baee2ff           call 0x85a2b0
// 00a2f455  50                   push eax
// 00a2f456  e8c3b5ddff           call 0x80aa1e
// 00a2f45b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f450();
extern int __stdcall G2_func_00a2f450(int);
int func_00a2f450()
{
    return G2_func_00a2f450(G1_func_00a2f450());
}
