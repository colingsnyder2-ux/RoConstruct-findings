// roc 2010-06 009e3740  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3740
//
// 009e3740  c705e8b4c1001809a000 mov dword ptr [0xc1b4e8], 0xa00918
// 009e374a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e3740;
extern char G2_func_009e3740;
void func_009e3740()
{
    G1_func_009e3740 = &G2_func_009e3740;
}
