// roc 2011-06 00a35a60  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35a60
//
// 00a35a60  c7057ce3cb00e0bea500 mov dword ptr [0xcbe37c], 0xa5bee0
// 00a35a6a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35a60;
extern char G2_func_00a35a60;
void func_00a35a60()
{
    G1_func_00a35a60 = &G2_func_00a35a60;
}
