// roc 2011-06 00a3d940  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d940
//
// 00a3d940  c7052827cd00e0bea500 mov dword ptr [0xcd2728], 0xa5bee0
// 00a3d94a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3d940;
extern char G2_func_00a3d940;
void func_00a3d940()
{
    G1_func_00a3d940 = &G2_func_00a3d940;
}
