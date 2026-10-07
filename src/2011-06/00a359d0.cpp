// roc 2011-06 00a359d0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a359d0
//
// 00a359d0  c705a4e2cb00e0bea500 mov dword ptr [0xcbe2a4], 0xa5bee0
// 00a359da  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a359d0;
extern char G2_func_00a359d0;
void func_00a359d0()
{
    G1_func_00a359d0 = &G2_func_00a359d0;
}
