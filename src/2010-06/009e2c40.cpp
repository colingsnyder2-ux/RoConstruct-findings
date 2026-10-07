// roc 2010-06 009e2c40  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2c40
//
// 009e2c40  c705e49dc1001809a000 mov dword ptr [0xc19de4], 0xa00918
// 009e2c4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e2c40;
extern char G2_func_009e2c40;
void func_009e2c40()
{
    G1_func_009e2c40 = &G2_func_009e2c40;
}
