// roc 2009-06 00897990  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897990
//
// 00897990  c705a047a40030d28a00 mov dword ptr [0xa447a0], 0x8ad230
// 0089799a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00897990;
extern char G2_func_00897990;
void func_00897990()
{
    G1_func_00897990 = &G2_func_00897990;
}
