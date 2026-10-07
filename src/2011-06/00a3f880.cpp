// roc 2011-06 00a3f880  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f880
//
// 00a3f880  c705685bcd0018afa700 mov dword ptr [0xcd5b68], 0xa7af18
// 00a3f88a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3f880;
extern char G2_func_00a3f880;
void func_00a3f880()
{
    G1_func_00a3f880 = &G2_func_00a3f880;
}
