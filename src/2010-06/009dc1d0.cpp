// roc 2010-06 009dc1d0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc1d0
//
// 009dc1d0  c7056c3ec0001809a000 mov dword ptr [0xc03e6c], 0xa00918
// 009dc1da  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009dc1d0;
extern char G2_func_009dc1d0;
void func_009dc1d0()
{
    G1_func_009dc1d0 = &G2_func_009dc1d0;
}
