// roc 2011-06 00a3ecc0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ecc0
//
// 00a3ecc0  c705ec3fcd00e0bea500 mov dword ptr [0xcd3fec], 0xa5bee0
// 00a3ecca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3ecc0;
extern char G2_func_00a3ecc0;
void func_00a3ecc0()
{
    G1_func_00a3ecc0 = &G2_func_00a3ecc0;
}
