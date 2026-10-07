// roc 2009-06 00897960  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897960
//
// 00897960  c7055847a40030d28a00 mov dword ptr [0xa44758], 0x8ad230
// 0089796a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897960;
extern char G2_func_00897960;
void func_00897960()
{
    G1_func_00897960 = &G2_func_00897960;
}
