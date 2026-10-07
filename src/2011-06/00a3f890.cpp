// roc 2011-06 00a3f890  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f890
//
// 00a3f890  c705945bcd00c4fba700 mov dword ptr [0xcd5b94], 0xa7fbc4
// 00a3f89a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3f890;
extern char G2_func_00a3f890;
void func_00a3f890()
{
    G1_func_00a3f890 = &G2_func_00a3f890;
}
