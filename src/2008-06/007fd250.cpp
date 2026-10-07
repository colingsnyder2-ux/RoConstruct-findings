// roc 2008-06 007fd250  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd250
//
// 007fd250  c705a84b970030b78000 mov dword ptr [0x974ba8], 0x80b730
// 007fd25a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd250;
extern char G2_func_007fd250;
void func_007fd250()
{
    G1_func_007fd250 = &G2_func_007fd250;
}
