// roc 2011-06 00a2f550  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f550
//
// 00a2f550  e82b69e7ff           call 0x8a5e80
// 00a2f555  50                   push eax
// 00a2f556  e8c3b4ddff           call 0x80aa1e
// 00a2f55b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f550();
extern int __stdcall G2_func_00a2f550(int);
int func_00a2f550()
{
    return G2_func_00a2f550(G1_func_00a2f550());
}
