// roc 2011-06 00a35a10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35a10
//
// 00a35a10  c70504e3cb00e0bea500 mov dword ptr [0xcbe304], 0xa5bee0
// 00a35a1a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35a10;
extern char G2_func_00a35a10;
void func_00a35a10()
{
    G1_func_00a35a10 = &G2_func_00a35a10;
}
