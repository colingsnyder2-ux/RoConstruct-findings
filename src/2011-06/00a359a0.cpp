// roc 2011-06 00a359a0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a359a0
//
// 00a359a0  c7055ce2cb00e0bea500 mov dword ptr [0xcbe25c], 0xa5bee0
// 00a359aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a359a0;
extern char G2_func_00a359a0;
void func_00a359a0()
{
    G1_func_00a359a0 = &G2_func_00a359a0;
}
