// roc 2008-06 007fd1b0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd1b0
//
// 007fd1b0  c705044b970030b78000 mov dword ptr [0x974b04], 0x80b730
// 007fd1ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd1b0;
extern char G2_func_007fd1b0;
void func_007fd1b0()
{
    G1_func_007fd1b0 = &G2_func_007fd1b0;
}
