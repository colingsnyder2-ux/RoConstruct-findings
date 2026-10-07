// roc 2009-06 008979b0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008979b0
//
// 008979b0  c705d047a40030d28a00 mov dword ptr [0xa447d0], 0x8ad230
// 008979ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008979b0;
extern char G2_func_008979b0;
void func_008979b0()
{
    G1_func_008979b0 = &G2_func_008979b0;
}
