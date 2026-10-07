// roc 2011-06 00a35950  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35950
//
// 00a35950  c705e4e1cb00e0bea500 mov dword ptr [0xcbe1e4], 0xa5bee0
// 00a3595a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35950;
extern char G2_func_00a35950;
void func_00a35950()
{
    G1_func_00a35950 = &G2_func_00a35950;
}
