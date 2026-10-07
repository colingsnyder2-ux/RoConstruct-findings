// roc 2011-06 00a2fa10  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa10
//
// 00a2fa10  e80bd8ecff           call 0x8fd220
// 00a2fa15  50                   push eax
// 00a2fa16  e803b0ddff           call 0x80aa1e
// 00a2fa1b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa10();
extern int __stdcall G2_func_00a2fa10(int);
int func_00a2fa10()
{
    return G2_func_00a2fa10(G1_func_00a2fa10());
}
