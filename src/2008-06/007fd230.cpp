// roc 2008-06 007fd230  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd230
//
// 007fd230  c705804b970030b78000 mov dword ptr [0x974b80], 0x80b730
// 007fd23a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd230;
extern char G2_func_007fd230;
void func_007fd230()
{
    G1_func_007fd230 = &G2_func_007fd230;
}
