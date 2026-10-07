// roc 2011-06 00a3f850  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f850
//
// 00a3f850  c705145bcd00c4fba700 mov dword ptr [0xcd5b14], 0xa7fbc4
// 00a3f85a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3f850;
extern char G2_func_00a3f850;
void func_00a3f850()
{
    G1_func_00a3f850 = &G2_func_00a3f850;
}
