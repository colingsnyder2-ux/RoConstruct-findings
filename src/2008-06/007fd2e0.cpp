// roc 2008-06 007fd2e0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd2e0
//
// 007fd2e0  c7055c4c970030b78000 mov dword ptr [0x974c5c], 0x80b730
// 007fd2ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd2e0;
extern char G2_func_007fd2e0;
void func_007fd2e0()
{
    G1_func_007fd2e0 = &G2_func_007fd2e0;
}
