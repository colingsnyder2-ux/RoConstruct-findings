// roc 2011-06 00a39c80  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c80
//
// 00a39c80  c70580bfcc00e0bea500 mov dword ptr [0xccbf80], 0xa5bee0
// 00a39c8a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a39c80;
extern char G2_func_00a39c80;
void func_00a39c80()
{
    G1_func_00a39c80 = &G2_func_00a39c80;
}
