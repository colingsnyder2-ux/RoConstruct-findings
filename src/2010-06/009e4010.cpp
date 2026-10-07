// roc 2010-06 009e4010  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4010
//
// 009e4010  c70524c2c1001809a000 mov dword ptr [0xc1c224], 0xa00918
// 009e401a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e4010;
extern char G2_func_009e4010;
void func_009e4010()
{
    G1_func_009e4010 = &G2_func_009e4010;
}
