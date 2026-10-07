// roc 2011-06 00a3fd84  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd84
//
// 00a3fd84  c7051c93d1003c04ae00 mov dword ptr [0xd1931c], 0xae043c
// 00a3fd8e  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3fd84;
extern char G2_func_00a3fd84;
void func_00a3fd84()
{
    G1_func_00a3fd84 = &G2_func_00a3fd84;
}
