// roc 2011-06 00a3e930  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e930
//
// 00a3e930  c705ac3ecd00e0bea500 mov dword ptr [0xcd3eac], 0xa5bee0
// 00a3e93a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e930;
extern char G2_func_00a3e930;
void func_00a3e930()
{
    G1_func_00a3e930 = &G2_func_00a3e930;
}
