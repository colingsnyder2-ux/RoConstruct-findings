// roc 2009-06 00897910  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897910
//
// 00897910  c705e046a40030d28a00 mov dword ptr [0xa446e0], 0x8ad230
// 0089791a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897910;
extern char G2_func_00897910;
void func_00897910()
{
    G1_func_00897910 = &G2_func_00897910;
}
