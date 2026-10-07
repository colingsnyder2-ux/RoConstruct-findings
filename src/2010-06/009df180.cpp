// roc 2010-06 009df180  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df180
//
// 009df180  c70538bfc0001809a000 mov dword ptr [0xc0bf38], 0xa00918
// 009df18a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df180;
extern char G2_func_009df180;
void func_009df180()
{
    G1_func_009df180 = &G2_func_009df180;
}
