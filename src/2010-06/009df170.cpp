// roc 2010-06 009df170  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df170
//
// 009df170  c70520bfc0001809a000 mov dword ptr [0xc0bf20], 0xa00918
// 009df17a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df170;
extern char G2_func_009df170;
void func_009df170()
{
    G1_func_009df170 = &G2_func_009df170;
}
