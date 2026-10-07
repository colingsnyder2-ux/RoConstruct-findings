// roc 2011-06 00a3e910  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e910
//
// 00a3e910  c705603dcd00e0bea500 mov dword ptr [0xcd3d60], 0xa5bee0
// 00a3e91a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e910;
extern char G2_func_00a3e910;
void func_00a3e910()
{
    G1_func_00a3e910 = &G2_func_00a3e910;
}
