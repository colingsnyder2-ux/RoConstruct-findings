// roc 2010-06 009dcad0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcad0
//
// 009dcad0  c705d449c0001809a000 mov dword ptr [0xc049d4], 0xa00918
// 009dcada  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009dcad0;
extern char G2_func_009dcad0;
void func_009dcad0()
{
    G1_func_009dcad0 = &G2_func_009dcad0;
}
