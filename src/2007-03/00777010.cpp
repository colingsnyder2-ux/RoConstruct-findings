// roc 2007-03 00777010  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777010
//
// 00777010  e8aba9f9ff           call 0x7119c0
// 00777015  50                   push eax
// 00777016  e8f37ceaff           call 0x61ed0e
// 0077701b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777010();
extern int __stdcall G2_func_00777010(int);
int func_00777010()
{
    return G2_func_00777010(G1_func_00777010());
}
