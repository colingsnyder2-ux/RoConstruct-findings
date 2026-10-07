// roc 2011-06 00a39c90  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c90
//
// 00a39c90  c70598bfcc00e0bea500 mov dword ptr [0xccbf98], 0xa5bee0
// 00a39c9a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a39c90;
extern char G2_func_00a39c90;
void func_00a39c90()
{
    G1_func_00a39c90 = &G2_func_00a39c90;
}
