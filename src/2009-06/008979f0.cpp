// roc 2009-06 008979f0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008979f0
//
// 008979f0  c7053048a40030d28a00 mov dword ptr [0xa44830], 0x8ad230
// 008979fa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008979f0;
extern char G2_func_008979f0;
void func_008979f0()
{
    G1_func_008979f0 = &G2_func_008979f0;
}
