// roc 2009-06 008979d0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008979d0
//
// 008979d0  c7050048a40030d28a00 mov dword ptr [0xa44800], 0x8ad230
// 008979da  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008979d0;
extern char G2_func_008979d0;
void func_008979d0()
{
    G1_func_008979d0 = &G2_func_008979d0;
}
