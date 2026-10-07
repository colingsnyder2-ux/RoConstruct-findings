// roc 2011-06 00a359e0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a359e0
//
// 00a359e0  c705bce2cb00e0bea500 mov dword ptr [0xcbe2bc], 0xa5bee0
// 00a359ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a359e0;
extern char G2_func_00a359e0;
void func_00a359e0()
{
    G1_func_00a359e0 = &G2_func_00a359e0;
}
