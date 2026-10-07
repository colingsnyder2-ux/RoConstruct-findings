// roc 2011-06 00a35980  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35980
//
// 00a35980  c7052ce2cb00e0bea500 mov dword ptr [0xcbe22c], 0xa5bee0
// 00a3598a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35980;
extern char G2_func_00a35980;
void func_00a35980()
{
    G1_func_00a35980 = &G2_func_00a35980;
}
