// roc 2011-06 00a3e900  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e900
//
// 00a3e900  c705143ccd00e0bea500 mov dword ptr [0xcd3c14], 0xa5bee0
// 00a3e90a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e900;
extern char G2_func_00a3e900;
void func_00a3e900()
{
    G1_func_00a3e900 = &G2_func_00a3e900;
}
