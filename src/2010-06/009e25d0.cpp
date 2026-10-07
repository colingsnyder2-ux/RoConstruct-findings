// roc 2010-06 009e25d0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e25d0
//
// 009e25d0  c7059895c1001809a000 mov dword ptr [0xc19598], 0xa00918
// 009e25da  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e25d0;
extern char G2_func_009e25d0;
void func_009e25d0()
{
    G1_func_009e25d0 = &G2_func_009e25d0;
}
