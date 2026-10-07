// roc 2010-06 009df050  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df050
//
// 009df050  c70570bdc0001809a000 mov dword ptr [0xc0bd70], 0xa00918
// 009df05a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df050;
extern char G2_func_009df050;
void func_009df050()
{
    G1_func_009df050 = &G2_func_009df050;
}
