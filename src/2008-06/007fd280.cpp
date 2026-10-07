// roc 2008-06 007fd280  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd280
//
// 007fd280  c705e44b970030b78000 mov dword ptr [0x974be4], 0x80b730
// 007fd28a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd280;
extern char G2_func_007fd280;
void func_007fd280()
{
    G1_func_007fd280 = &G2_func_007fd280;
}
