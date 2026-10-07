// roc 2009-06 00897940  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897940
//
// 00897940  c7052847a40030d28a00 mov dword ptr [0xa44728], 0x8ad230
// 0089794a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897940;
extern char G2_func_00897940;
void func_00897940()
{
    G1_func_00897940 = &G2_func_00897940;
}
