// roc 2009-06 00897900  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897900
//
// 00897900  c705c846a40030d28a00 mov dword ptr [0xa446c8], 0x8ad230
// 0089790a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897900;
extern char G2_func_00897900;
void func_00897900()
{
    G1_func_00897900 = &G2_func_00897900;
}
