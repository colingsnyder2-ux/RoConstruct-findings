// roc 2010-06 009df1c0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df1c0
//
// 009df1c0  c70598bfc0001809a000 mov dword ptr [0xc0bf98], 0xa00918
// 009df1ca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df1c0;
extern char G2_func_009df1c0;
void func_009df1c0()
{
    G1_func_009df1c0 = &G2_func_009df1c0;
}
