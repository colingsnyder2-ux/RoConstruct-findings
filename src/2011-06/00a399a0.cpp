// roc 2011-06 00a399a0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a399a0
//
// 00a399a0  c70538bacc00e0bea500 mov dword ptr [0xccba38], 0xa5bee0
// 00a399aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a399a0;
extern char G2_func_00a399a0;
void func_00a399a0()
{
    G1_func_00a399a0 = &G2_func_00a399a0;
}
