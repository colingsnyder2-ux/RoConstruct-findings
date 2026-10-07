// roc 2008-06 007ffbb0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffbb0
//
// 007ffbb0  c705bcb2970030b78000 mov dword ptr [0x97b2bc], 0x80b730
// 007ffbba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ffbb0;
extern char G2_func_007ffbb0;
void func_007ffbb0()
{
    G1_func_007ffbb0 = &G2_func_007ffbb0;
}
