// roc 2010-06 009e7290  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7290
//
// 009e7290  c705ac07c2001809a000 mov dword ptr [0xc207ac], 0xa00918
// 009e729a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e7290;
extern char G2_func_009e7290;
void func_009e7290()
{
    G1_func_009e7290 = &G2_func_009e7290;
}
