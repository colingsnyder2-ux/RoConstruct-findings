// roc 2008-06 007fd760  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd760
//
// 007fd760  c7058855970030b78000 mov dword ptr [0x975588], 0x80b730
// 007fd76a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd760;
extern char G2_func_007fd760;
void func_007fd760()
{
    G1_func_007fd760 = &G2_func_007fd760;
}
