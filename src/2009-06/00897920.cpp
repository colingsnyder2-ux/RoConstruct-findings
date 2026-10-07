// roc 2009-06 00897920  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897920
//
// 00897920  c705f846a40030d28a00 mov dword ptr [0xa446f8], 0x8ad230
// 0089792a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897920;
extern char G2_func_00897920;
void func_00897920()
{
    G1_func_00897920 = &G2_func_00897920;
}
