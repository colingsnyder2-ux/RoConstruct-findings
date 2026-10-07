// roc 2008-06 007fb7b0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb7b0
//
// 007fb7b0  c7057402970030b78000 mov dword ptr [0x970274], 0x80b730
// 007fb7ba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fb7b0;
extern char G2_func_007fb7b0;
void func_007fb7b0()
{
    G1_func_007fb7b0 = &G2_func_007fb7b0;
}
