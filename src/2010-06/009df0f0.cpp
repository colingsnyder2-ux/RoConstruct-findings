// roc 2010-06 009df0f0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df0f0
//
// 009df0f0  c70560bec0001809a000 mov dword ptr [0xc0be60], 0xa00918
// 009df0fa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df0f0;
extern char G2_func_009df0f0;
void func_009df0f0()
{
    G1_func_009df0f0 = &G2_func_009df0f0;
}
