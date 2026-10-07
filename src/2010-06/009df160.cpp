// roc 2010-06 009df160  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df160
//
// 009df160  c70508bfc0001809a000 mov dword ptr [0xc0bf08], 0xa00918
// 009df16a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df160;
extern char G2_func_009df160;
void func_009df160()
{
    G1_func_009df160 = &G2_func_009df160;
}
