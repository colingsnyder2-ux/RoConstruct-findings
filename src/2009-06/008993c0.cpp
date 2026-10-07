// roc 2009-06 008993c0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008993c0
//
// 008993c0  c705a0a7a40030d28a00 mov dword ptr [0xa4a7a0], 0x8ad230
// 008993ca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008993c0;
extern char G2_func_008993c0;
void func_008993c0()
{
    G1_func_008993c0 = &G2_func_008993c0;
}
