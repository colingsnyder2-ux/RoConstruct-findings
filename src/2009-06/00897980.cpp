// roc 2009-06 00897980  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897980
//
// 00897980  c7058847a40030d28a00 mov dword ptr [0xa44788], 0x8ad230
// 0089798a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897980;
extern char G2_func_00897980;
void func_00897980()
{
    G1_func_00897980 = &G2_func_00897980;
}
