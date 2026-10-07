// roc 2011-06 00a35960  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35960
//
// 00a35960  c705fce1cb00e0bea500 mov dword ptr [0xcbe1fc], 0xa5bee0
// 00a3596a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35960;
extern char G2_func_00a35960;
void func_00a35960()
{
    G1_func_00a35960 = &G2_func_00a35960;
}
