// roc 2011-06 00a35940  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35940
//
// 00a35940  c705cce1cb00e0bea500 mov dword ptr [0xcbe1cc], 0xa5bee0
// 00a3594a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35940;
extern char G2_func_00a35940;
void func_00a35940()
{
    G1_func_00a35940 = &G2_func_00a35940;
}
