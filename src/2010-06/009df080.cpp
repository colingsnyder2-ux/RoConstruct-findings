// roc 2010-06 009df080  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df080
//
// 009df080  c705b8bdc0001809a000 mov dword ptr [0xc0bdb8], 0xa00918
// 009df08a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df080;
extern char G2_func_009df080;
void func_009df080()
{
    G1_func_009df080 = &G2_func_009df080;
}
