// roc 2009-06 00897950  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897950
//
// 00897950  c7054047a40030d28a00 mov dword ptr [0xa44740], 0x8ad230
// 0089795a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897950;
extern char G2_func_00897950;
void func_00897950()
{
    G1_func_00897950 = &G2_func_00897950;
}
