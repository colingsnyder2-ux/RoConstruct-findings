// roc 2010-06 009df060  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df060
//
// 009df060  c70588bdc0001809a000 mov dword ptr [0xc0bd88], 0xa00918
// 009df06a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df060;
extern char G2_func_009df060;
void func_009df060()
{
    G1_func_009df060 = &G2_func_009df060;
}
