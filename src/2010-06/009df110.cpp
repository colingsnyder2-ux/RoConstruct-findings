// roc 2010-06 009df110  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df110
//
// 009df110  c70590bec0001809a000 mov dword ptr [0xc0be90], 0xa00918
// 009df11a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df110;
extern char G2_func_009df110;
void func_009df110()
{
    G1_func_009df110 = &G2_func_009df110;
}
