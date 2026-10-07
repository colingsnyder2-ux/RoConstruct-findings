// roc 2010-06 009e2e00  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2e00
//
// 009e2e00  c70510a0c1001809a000 mov dword ptr [0xc1a010], 0xa00918
// 009e2e0a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e2e00;
extern char G2_func_009e2e00;
void func_009e2e00()
{
    G1_func_009e2e00 = &G2_func_009e2e00;
}
