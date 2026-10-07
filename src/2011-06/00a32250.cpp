// roc 2011-06 00a32250  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32250
//
// 00a32250  c7051c54cb00e0bea500 mov dword ptr [0xcb541c], 0xa5bee0
// 00a3225a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a32250;
extern char G2_func_00a32250;
void func_00a32250()
{
    G1_func_00a32250 = &G2_func_00a32250;
}
