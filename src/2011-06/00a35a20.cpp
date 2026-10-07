// roc 2011-06 00a35a20  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35a20
//
// 00a35a20  c7051ce3cb00e0bea500 mov dword ptr [0xcbe31c], 0xa5bee0
// 00a35a2a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35a20;
extern char G2_func_00a35a20;
void func_00a35a20()
{
    G1_func_00a35a20 = &G2_func_00a35a20;
}
