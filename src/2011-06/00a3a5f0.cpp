// roc 2011-06 00a3a5f0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a5f0
//
// 00a3a5f0  c70568cdcc00e0bea500 mov dword ptr [0xcccd68], 0xa5bee0
// 00a3a5fa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3a5f0;
extern char G2_func_00a3a5f0;
void func_00a3a5f0()
{
    G1_func_00a3a5f0 = &G2_func_00a3a5f0;
}
