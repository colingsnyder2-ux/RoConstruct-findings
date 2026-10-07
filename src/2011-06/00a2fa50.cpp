// roc 2011-06 00a2fa50  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa50
//
// 00a2fa50  e87bedecff           call 0x8fe7d0
// 00a2fa55  50                   push eax
// 00a2fa56  e8c3afddff           call 0x80aa1e
// 00a2fa5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa50();
extern int __stdcall G2_func_00a2fa50(int);
int func_00a2fa50()
{
    return G2_func_00a2fa50(G1_func_00a2fa50());
}
