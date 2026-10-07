// roc 2010-06 009df070  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df070
//
// 009df070  c705a0bdc0001809a000 mov dword ptr [0xc0bda0], 0xa00918
// 009df07a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df070;
extern char G2_func_009df070;
void func_009df070()
{
    G1_func_009df070 = &G2_func_009df070;
}
