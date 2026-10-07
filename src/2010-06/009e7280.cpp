// roc 2010-06 009e7280  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7280
//
// 009e7280  c705c407c2001809a000 mov dword ptr [0xc207c4], 0xa00918
// 009e728a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e7280;
extern char G2_func_009e7280;
void func_009e7280()
{
    G1_func_009e7280 = &G2_func_009e7280;
}
