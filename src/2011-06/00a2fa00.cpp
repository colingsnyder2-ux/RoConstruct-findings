// roc 2011-06 00a2fa00  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa00
//
// 00a2fa00  e86bc0ecff           call 0x8fba70
// 00a2fa05  50                   push eax
// 00a2fa06  e813b0ddff           call 0x80aa1e
// 00a2fa0b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa00();
extern int __stdcall G2_func_00a2fa00(int);
int func_00a2fa00()
{
    return G2_func_00a2fa00(G1_func_00a2fa00());
}
