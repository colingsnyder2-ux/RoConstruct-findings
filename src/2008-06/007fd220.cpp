// roc 2008-06 007fd220  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd220
//
// 007fd220  c7056c4b970030b78000 mov dword ptr [0x974b6c], 0x80b730
// 007fd22a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd220;
extern char G2_func_007fd220;
void func_007fd220()
{
    G1_func_007fd220 = &G2_func_007fd220;
}
