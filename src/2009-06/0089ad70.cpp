// roc 2009-06 0089ad70  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ad70
//
// 0089ad70  c705fcd2a40030d28a00 mov dword ptr [0xa4d2fc], 0x8ad230
// 0089ad7a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089ad70;
extern char G2_func_0089ad70;
void func_0089ad70()
{
    G1_func_0089ad70 = &G2_func_0089ad70;
}
