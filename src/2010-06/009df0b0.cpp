// roc 2010-06 009df0b0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df0b0
//
// 009df0b0  c70500bec0001809a000 mov dword ptr [0xc0be00], 0xa00918
// 009df0ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df0b0;
extern char G2_func_009df0b0;
void func_009df0b0()
{
    G1_func_009df0b0 = &G2_func_009df0b0;
}
