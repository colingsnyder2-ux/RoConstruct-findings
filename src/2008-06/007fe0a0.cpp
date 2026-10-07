// roc 2008-06 007fe0a0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe0a0
//
// 007fe0a0  c705586a970030b78000 mov dword ptr [0x976a58], 0x80b730
// 007fe0aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fe0a0;
extern char G2_func_007fe0a0;
void func_007fe0a0()
{
    G1_func_007fe0a0 = &G2_func_007fe0a0;
}
