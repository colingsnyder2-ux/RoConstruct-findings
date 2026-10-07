// roc 2010-06 009df190  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df190
//
// 009df190  c70550bfc0001809a000 mov dword ptr [0xc0bf50], 0xa00918
// 009df19a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df190;
extern char G2_func_009df190;
void func_009df190()
{
    G1_func_009df190 = &G2_func_009df190;
}
