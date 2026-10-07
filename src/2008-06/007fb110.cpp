// roc 2008-06 007fb110  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb110
//
// 007fb110  c70598fb960030b78000 mov dword ptr [0x96fb98], 0x80b730
// 007fb11a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fb110;
extern char G2_func_007fb110;
void func_007fb110()
{
    G1_func_007fb110 = &G2_func_007fb110;
}
