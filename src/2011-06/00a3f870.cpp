// roc 2011-06 00a3f870  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f870
//
// 00a3f870  c705545bcd00c4fba700 mov dword ptr [0xcd5b54], 0xa7fbc4
// 00a3f87a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3f870;
extern char G2_func_00a3f870;
void func_00a3f870()
{
    G1_func_00a3f870 = &G2_func_00a3f870;
}
