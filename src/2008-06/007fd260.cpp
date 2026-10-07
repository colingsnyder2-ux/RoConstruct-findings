// roc 2008-06 007fd260  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd260
//
// 007fd260  c705bc4b970030b78000 mov dword ptr [0x974bbc], 0x80b730
// 007fd26a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd260;
extern char G2_func_007fd260;
void func_007fd260()
{
    G1_func_007fd260 = &G2_func_007fd260;
}
