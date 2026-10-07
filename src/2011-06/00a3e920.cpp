// roc 2011-06 00a3e920  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e920
//
// 00a3e920  c705f83bcd00e0bea500 mov dword ptr [0xcd3bf8], 0xa5bee0
// 00a3e92a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a3e920;
extern char G2_func_00a3e920;
void func_00a3e920()
{
    G1_func_00a3e920 = &G2_func_00a3e920;
}
