// roc 2007-03 00776f30  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776f30
//
// 00776f30  e8bb3ef7ff           call 0x6eadf0
// 00776f35  50                   push eax
// 00776f36  e8d37deaff           call 0x61ed0e
// 00776f3b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f30();
extern int __stdcall G2_func_00776f30(int);
int func_00776f30()
{
    return G2_func_00776f30(G1_func_00776f30());
}
