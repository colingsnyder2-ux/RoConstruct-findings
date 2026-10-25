// from server: 100% by auto
// roc 2008-06 007ffbd0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffbd0
//
// 007ffbd0  c705dcb3970030b78000 mov dword ptr [0x97b3dc], 0x80b730
// 007ffbda  c3                   ret 

extern char G;

extern void* G1_func_007ffbd0;
extern char G2_func_007ffbd0;
void func_007ffbd0()
{
    G1_func_007ffbd0 = &G2_func_007ffbd0;
}
