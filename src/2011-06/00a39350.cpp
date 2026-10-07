// roc 2011-06 00a39350  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39350
//
// 00a39350  c7057caacc00e0bea500 mov dword ptr [0xccaa7c], 0xa5bee0
// 00a3935a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a39350;
extern char G2_func_00a39350;
void func_00a39350()
{
    G1_func_00a39350 = &G2_func_00a39350;
}
