// roc 2009-06 00894fe0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894fe0
//
// 00894fe0  c70510d5a30030d28a00 mov dword ptr [0xa3d510], 0x8ad230
// 00894fea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00894fe0;
extern char G2_func_00894fe0;
void func_00894fe0()
{
    G1_func_00894fe0 = &G2_func_00894fe0;
}
