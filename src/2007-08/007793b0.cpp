// roc 2007-08 007793b0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007793b0
//
// 007793b0  c705400f8c00b4707800 mov dword ptr [0x8c0f40], 0x7870b4
// 007793ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007793b0;
extern char G2_func_007793b0;
void func_007793b0()
{
    G1_func_007793b0 = &G2_func_007793b0;
}
