// roc 2008-06 007fdbc0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdbc0
//
// 007fdbc0  c70584639700e0e18100 mov dword ptr [0x976384], 0x81e1e0
// 007fdbca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fdbc0;
extern char G2_func_007fdbc0;
void func_007fdbc0()
{
    G1_func_007fdbc0 = &G2_func_007fdbc0;
}
