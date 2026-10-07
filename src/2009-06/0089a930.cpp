// roc 2009-06 0089a930  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a930
//
// 0089a930  c705f4cfa40030d28a00 mov dword ptr [0xa4cff4], 0x8ad230
// 0089a93a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089a930;
extern char G2_func_0089a930;
void func_0089a930()
{
    G1_func_0089a930 = &G2_func_0089a930;
}
