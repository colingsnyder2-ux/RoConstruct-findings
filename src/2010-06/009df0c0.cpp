// roc 2010-06 009df0c0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df0c0
//
// 009df0c0  c70518bec0001809a000 mov dword ptr [0xc0be18], 0xa00918
// 009df0ca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df0c0;
extern char G2_func_009df0c0;
void func_009df0c0()
{
    G1_func_009df0c0 = &G2_func_009df0c0;
}
