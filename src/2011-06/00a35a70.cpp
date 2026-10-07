// roc 2011-06 00a35a70  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35a70
//
// 00a35a70  c70594e3cb00e0bea500 mov dword ptr [0xcbe394], 0xa5bee0
// 00a35a7a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35a70;
extern char G2_func_00a35a70;
void func_00a35a70()
{
    G1_func_00a35a70 = &G2_func_00a35a70;
}
