// roc 2008-06 007ffbe0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffbe0
//
// 007ffbe0  c70510b2970030b78000 mov dword ptr [0x97b210], 0x80b730
// 007ffbea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ffbe0;
extern char G2_func_007ffbe0;
void func_007ffbe0()
{
    G1_func_007ffbe0 = &G2_func_007ffbe0;
}
