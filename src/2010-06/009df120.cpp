// roc 2010-06 009df120  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df120
//
// 009df120  c705a8bec0001809a000 mov dword ptr [0xc0bea8], 0xa00918
// 009df12a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df120;
extern char G2_func_009df120;
void func_009df120()
{
    G1_func_009df120 = &G2_func_009df120;
}
