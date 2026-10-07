// roc 2011-06 00a35900  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35900
//
// 00a35900  c7056ce1cb00e0bea500 mov dword ptr [0xcbe16c], 0xa5bee0
// 00a3590a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35900;
extern char G2_func_00a35900;
void func_00a35900()
{
    G1_func_00a35900 = &G2_func_00a35900;
}
