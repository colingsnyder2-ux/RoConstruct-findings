// roc 2011-06 00a3e400  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e400
//
// 00a3e400  c7053834cd00e0bea500 mov dword ptr [0xcd3438], 0xa5bee0
// 00a3e40a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e400;
extern char G2_func_00a3e400;
void func_00a3e400()
{
    G1_func_00a3e400 = &G2_func_00a3e400;
}
