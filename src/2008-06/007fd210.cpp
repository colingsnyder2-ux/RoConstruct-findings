// roc 2008-06 007fd210  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd210
//
// 007fd210  c705584b970030b78000 mov dword ptr [0x974b58], 0x80b730
// 007fd21a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd210;
extern char G2_func_007fd210;
void func_007fd210()
{
    G1_func_007fd210 = &G2_func_007fd210;
}
