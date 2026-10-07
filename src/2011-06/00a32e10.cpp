// roc 2011-06 00a32e10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32e10
//
// 00a32e10  c7052065cb00e0bea500 mov dword ptr [0xcb6520], 0xa5bee0
// 00a32e1a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00a32e10;
extern char G2_func_00a32e10;
void func_00a32e10()
{
    G1_func_00a32e10 = &G2_func_00a32e10;
}
