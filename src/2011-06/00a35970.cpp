// roc 2011-06 00a35970  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35970
//
// 00a35970  c70514e2cb00e0bea500 mov dword ptr [0xcbe214], 0xa5bee0
// 00a3597a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35970;
extern char G2_func_00a35970;
void func_00a35970()
{
    G1_func_00a35970 = &G2_func_00a35970;
}
