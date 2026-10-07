// roc 2010-06 009e6cc0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6cc0
//
// 009e6cc0  c7052c01c2001809a000 mov dword ptr [0xc2012c], 0xa00918
// 009e6cca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e6cc0;
extern char G2_func_009e6cc0;
void func_009e6cc0()
{
    G1_func_009e6cc0 = &G2_func_009e6cc0;
}
