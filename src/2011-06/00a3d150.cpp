// roc 2011-06 00a3d150  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d150
//
// 00a3d150  c705d419cd00e0bea500 mov dword ptr [0xcd19d4], 0xa5bee0
// 00a3d15a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3d150;
extern char G2_func_00a3d150;
void func_00a3d150()
{
    G1_func_00a3d150 = &G2_func_00a3d150;
}
