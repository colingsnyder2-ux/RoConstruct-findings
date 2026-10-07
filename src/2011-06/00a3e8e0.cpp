// roc 2011-06 00a3e8e0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e8e0
//
// 00a3e8e0  c705743bcd00e0bea500 mov dword ptr [0xcd3b74], 0xa5bee0
// 00a3e8ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e8e0;
extern char G2_func_00a3e8e0;
void func_00a3e8e0()
{
    G1_func_00a3e8e0 = &G2_func_00a3e8e0;
}
