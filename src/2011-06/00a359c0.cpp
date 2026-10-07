// roc 2011-06 00a359c0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a359c0
//
// 00a359c0  c7058ce2cb00e0bea500 mov dword ptr [0xcbe28c], 0xa5bee0
// 00a359ca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a359c0;
extern char G2_func_00a359c0;
void func_00a359c0()
{
    G1_func_00a359c0 = &G2_func_00a359c0;
}
