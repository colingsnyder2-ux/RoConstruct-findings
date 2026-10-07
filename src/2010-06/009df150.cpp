// roc 2010-06 009df150  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df150
//
// 009df150  c705f0bec0001809a000 mov dword ptr [0xc0bef0], 0xa00918
// 009df15a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df150;
extern char G2_func_009df150;
void func_009df150()
{
    G1_func_009df150 = &G2_func_009df150;
}
