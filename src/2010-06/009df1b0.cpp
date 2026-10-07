// roc 2010-06 009df1b0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df1b0
//
// 009df1b0  c70580bfc0001809a000 mov dword ptr [0xc0bf80], 0xa00918
// 009df1ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df1b0;
extern char G2_func_009df1b0;
void func_009df1b0()
{
    G1_func_009df1b0 = &G2_func_009df1b0;
}
