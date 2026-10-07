// roc 2009-06 0089ad50  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ad50
//
// 0089ad50  c705d0d1a40030d28a00 mov dword ptr [0xa4d1d0], 0x8ad230
// 0089ad5a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089ad50;
extern char G2_func_0089ad50;
void func_0089ad50()
{
    G1_func_0089ad50 = &G2_func_0089ad50;
}
