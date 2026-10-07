// roc 2008-06 007ffbc0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffbc0
//
// 007ffbc0  c70584b1970030b78000 mov dword ptr [0x97b184], 0x80b730
// 007ffbca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ffbc0;
extern char G2_func_007ffbc0;
void func_007ffbc0()
{
    G1_func_007ffbc0 = &G2_func_007ffbc0;
}
