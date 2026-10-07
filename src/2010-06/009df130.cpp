// roc 2010-06 009df130  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df130
//
// 009df130  c705c0bec0001809a000 mov dword ptr [0xc0bec0], 0xa00918
// 009df13a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df130;
extern char G2_func_009df130;
void func_009df130()
{
    G1_func_009df130 = &G2_func_009df130;
}
