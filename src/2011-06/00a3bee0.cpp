// roc 2011-06 00a3bee0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3bee0
//
// 00a3bee0  c7054c4bc60018afa700 mov dword ptr [0xc64b4c], 0xa7af18
// 00a3beea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3bee0;
extern char G2_func_00a3bee0;
void func_00a3bee0()
{
    G1_func_00a3bee0 = &G2_func_00a3bee0;
}
