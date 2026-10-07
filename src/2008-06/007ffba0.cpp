// roc 2008-06 007ffba0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffba0
//
// 007ffba0  c7059cb1970030b78000 mov dword ptr [0x97b19c], 0x80b730
// 007ffbaa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ffba0;
extern char G2_func_007ffba0;
void func_007ffba0()
{
    G1_func_007ffba0 = &G2_func_007ffba0;
}
