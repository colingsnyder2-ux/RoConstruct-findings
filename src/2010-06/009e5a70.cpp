// roc 2010-06 009e5a70  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5a70
//
// 009e5a70  c70500ecc1001809a000 mov dword ptr [0xc1ec00], 0xa00918
// 009e5a7a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5a70;
extern char G2_func_009e5a70;
void func_009e5a70()
{
    G1_func_009e5a70 = &G2_func_009e5a70;
}
