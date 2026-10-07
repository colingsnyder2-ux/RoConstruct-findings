// roc 2011-06 00a3f8a0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f8a0
//
// 00a3f8a0  c705a85bcd0018afa700 mov dword ptr [0xcd5ba8], 0xa7af18
// 00a3f8aa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3f8a0;
extern char G2_func_00a3f8a0;
void func_00a3f8a0()
{
    G1_func_00a3f8a0 = &G2_func_00a3f8a0;
}
