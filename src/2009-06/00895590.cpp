// roc 2009-06 00895590  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895590
//
// 00895590  c70580dba30030d28a00 mov dword ptr [0xa3db80], 0x8ad230
// 0089559a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00895590;
extern char G2_func_00895590;
void func_00895590()
{
    G1_func_00895590 = &G2_func_00895590;
}
