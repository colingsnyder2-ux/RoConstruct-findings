// roc 2011-06 00a35920  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35920
//
// 00a35920  c7059ce1cb00e0bea500 mov dword ptr [0xcbe19c], 0xa5bee0
// 00a3592a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35920;
extern char G2_func_00a35920;
void func_00a35920()
{
    G1_func_00a35920 = &G2_func_00a35920;
}
