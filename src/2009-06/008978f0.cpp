// roc 2009-06 008978f0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008978f0
//
// 008978f0  c705b046a40030d28a00 mov dword ptr [0xa446b0], 0x8ad230
// 008978fa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008978f0;
extern char G2_func_008978f0;
void func_008978f0()
{
    G1_func_008978f0 = &G2_func_008978f0;
}
