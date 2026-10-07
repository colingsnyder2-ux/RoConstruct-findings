// roc 2010-06 009e5aa0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5aa0
//
// 009e5aa0  c70538ebc1001809a000 mov dword ptr [0xc1eb38], 0xa00918
// 009e5aaa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5aa0;
extern char G2_func_009e5aa0;
void func_009e5aa0()
{
    G1_func_009e5aa0 = &G2_func_009e5aa0;
}
