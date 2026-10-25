// from server: 100% by auto
// roc 2008-06 007fdac0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdac0
//
// 007fdac0  c705745c970030b78000 mov dword ptr [0x975c74], 0x80b730
// 007fdaca  c3                   ret 

extern char G;

extern void* G1_func_007fdac0;
extern char G2_func_007fdac0;
void func_007fdac0()
{
    G1_func_007fdac0 = &G2_func_007fdac0;
}
