// roc 2011-06 00a39ca0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39ca0
//
// 00a39ca0  c705b0bfcc00e0bea500 mov dword ptr [0xccbfb0], 0xa5bee0
// 00a39caa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a39ca0;
extern char G2_func_00a39ca0;
void func_00a39ca0()
{
    G1_func_00a39ca0 = &G2_func_00a39ca0;
}
