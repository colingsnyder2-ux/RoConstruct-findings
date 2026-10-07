// roc 2009-06 00899ee0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899ee0
//
// 00899ee0  c705c4b9a40030d28a00 mov dword ptr [0xa4b9c4], 0x8ad230
// 00899eea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00899ee0;
extern char G2_func_00899ee0;
void func_00899ee0()
{
    G1_func_00899ee0 = &G2_func_00899ee0;
}
