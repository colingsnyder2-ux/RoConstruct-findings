// roc 2009-06 00897a00  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897a00
//
// 00897a00  c7054848a40030d28a00 mov dword ptr [0xa44848], 0x8ad230
// 00897a0a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897a00;
extern char G2_func_00897a00;
void func_00897a00()
{
    G1_func_00897a00 = &G2_func_00897a00;
}
