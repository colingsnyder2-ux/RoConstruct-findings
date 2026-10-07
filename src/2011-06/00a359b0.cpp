// roc 2011-06 00a359b0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a359b0
//
// 00a359b0  c70574e2cb00e0bea500 mov dword ptr [0xcbe274], 0xa5bee0
// 00a359ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a359b0;
extern char G2_func_00a359b0;
void func_00a359b0()
{
    G1_func_00a359b0 = &G2_func_00a359b0;
}
