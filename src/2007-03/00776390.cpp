// roc 2007-03 00776390  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776390
//
// 00776390  e81b81edff           call 0x64e4b0
// 00776395  50                   push eax
// 00776396  e87389eaff           call 0x61ed0e
// 0077639b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776390();
extern int __stdcall G2_func_00776390(int);
int func_00776390()
{
    return G2_func_00776390(G1_func_00776390());
}
