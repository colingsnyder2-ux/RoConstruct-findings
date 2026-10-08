// roc 2007-03 00777040  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777040
//
// 00777040  e85baaf9ff           call 0x711aa0
// 00777045  50                   push eax
// 00777046  e8c37ceaff           call 0x61ed0e
// 0077704b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777040();
extern int __stdcall G2_func_00777040(int);
int func_00777040()
{
    return G2_func_00777040(G1_func_00777040());
}
