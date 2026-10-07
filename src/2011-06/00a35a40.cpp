// roc 2011-06 00a35a40  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35a40
//
// 00a35a40  c7054ce3cb00e0bea500 mov dword ptr [0xcbe34c], 0xa5bee0
// 00a35a4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a35a40;
extern char G2_func_00a35a40;
void func_00a35a40()
{
    G1_func_00a35a40 = &G2_func_00a35a40;
}
