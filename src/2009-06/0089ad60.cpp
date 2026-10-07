// roc 2009-06 0089ad60  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ad60
//
// 0089ad60  c70598d0a40030d28a00 mov dword ptr [0xa4d098], 0x8ad230
// 0089ad6a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089ad60;
extern char G2_func_0089ad60;
void func_0089ad60()
{
    G1_func_0089ad60 = &G2_func_0089ad60;
}
