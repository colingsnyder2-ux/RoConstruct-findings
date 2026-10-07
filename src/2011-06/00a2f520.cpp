// roc 2011-06 00a2f520  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f520
//
// 00a2f520  e8fb1fe7ff           call 0x8a1520
// 00a2f525  50                   push eax
// 00a2f526  e8f3b4ddff           call 0x80aa1e
// 00a2f52b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f520();
extern int __stdcall G2_func_00a2f520(int);
int func_00a2f520()
{
    return G2_func_00a2f520(G1_func_00a2f520());
}
