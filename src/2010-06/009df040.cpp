// roc 2010-06 009df040  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df040
//
// 009df040  c70558bdc0001809a000 mov dword ptr [0xc0bd58], 0xa00918
// 009df04a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df040;
extern char G2_func_009df040;
void func_009df040()
{
    G1_func_009df040 = &G2_func_009df040;
}
