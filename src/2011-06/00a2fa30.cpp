// roc 2011-06 00a2fa30  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fa30
//
// 00a2fa30  e8ebececff           call 0x8fe720
// 00a2fa35  50                   push eax
// 00a2fa36  e8e3afddff           call 0x80aa1e
// 00a2fa3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2fa30();
extern int __stdcall G2_func_00a2fa30(int);
int func_00a2fa30()
{
    return G2_func_00a2fa30(G1_func_00a2fa30());
}
