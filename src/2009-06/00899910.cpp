// roc 2009-06 00899910  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899910
//
// 00899910  c7058cb2a40030d28a00 mov dword ptr [0xa4b28c], 0x8ad230
// 0089991a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00899910;
extern char G2_func_00899910;
void func_00899910()
{
    G1_func_00899910 = &G2_func_00899910;
}
