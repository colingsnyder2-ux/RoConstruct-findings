// roc 2011-06 00a35930  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35930
//
// 00a35930  c705b4e1cb00e0bea500 mov dword ptr [0xcbe1b4], 0xa5bee0
// 00a3593a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35930;
extern char G2_func_00a35930;
void func_00a35930()
{
    G1_func_00a35930 = &G2_func_00a35930;
}
