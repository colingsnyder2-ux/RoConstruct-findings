// roc 2009-06 0089ca40  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca40
//
// 0089ca40  c7056cf5a40030d28a00 mov dword ptr [0xa4f56c], 0x8ad230
// 0089ca4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089ca40;
extern char G2_func_0089ca40;
void func_0089ca40()
{
    G1_func_0089ca40 = &G2_func_0089ca40;
}
