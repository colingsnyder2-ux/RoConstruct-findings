// roc 2008-06 007fd240  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd240
//
// 007fd240  c705944b970030b78000 mov dword ptr [0x974b94], 0x80b730
// 007fd24a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd240;
extern char G2_func_007fd240;
void func_007fd240()
{
    G1_func_007fd240 = &G2_func_007fd240;
}
