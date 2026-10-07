// roc 2009-06 0089ad40  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ad40
//
// 0089ad40  c705b0d0a40030d28a00 mov dword ptr [0xa4d0b0], 0x8ad230
// 0089ad4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089ad40;
extern char G2_func_0089ad40;
void func_0089ad40()
{
    G1_func_0089ad40 = &G2_func_0089ad40;
}
