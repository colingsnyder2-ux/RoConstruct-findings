// roc 2008-06 007fd290  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd290
//
// 007fd290  c705f84b970030b78000 mov dword ptr [0x974bf8], 0x80b730
// 007fd29a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd290;
extern char G2_func_007fd290;
void func_007fd290()
{
    G1_func_007fd290 = &G2_func_007fd290;
}
