// roc 2010-06 009df0a0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df0a0
//
// 009df0a0  c705e8bdc0001809a000 mov dword ptr [0xc0bde8], 0xa00918
// 009df0aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df0a0;
extern char G2_func_009df0a0;
void func_009df0a0()
{
    G1_func_009df0a0 = &G2_func_009df0a0;
}
