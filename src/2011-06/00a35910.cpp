// roc 2011-06 00a35910  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35910
//
// 00a35910  c70584e1cb00e0bea500 mov dword ptr [0xcbe184], 0xa5bee0
// 00a3591a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35910;
extern char G2_func_00a35910;
void func_00a35910()
{
    G1_func_00a35910 = &G2_func_00a35910;
}
