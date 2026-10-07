// roc 2009-06 00897970  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897970
//
// 00897970  c7057047a40030d28a00 mov dword ptr [0xa44770], 0x8ad230
// 0089797a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897970;
extern char G2_func_00897970;
void func_00897970()
{
    G1_func_00897970 = &G2_func_00897970;
}
