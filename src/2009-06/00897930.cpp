// roc 2009-06 00897930  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897930
//
// 00897930  c7051047a40030d28a00 mov dword ptr [0xa44710], 0x8ad230
// 0089793a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897930;
extern char G2_func_00897930;
void func_00897930()
{
    G1_func_00897930 = &G2_func_00897930;
}
