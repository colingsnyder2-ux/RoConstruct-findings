// roc 2009-06 008979a0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008979a0
//
// 008979a0  c705b847a40030d28a00 mov dword ptr [0xa447b8], 0x8ad230
// 008979aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008979a0;
extern char G2_func_008979a0;
void func_008979a0()
{
    G1_func_008979a0 = &G2_func_008979a0;
}
