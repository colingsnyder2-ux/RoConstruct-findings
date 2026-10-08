// roc 2007-03 00777020  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777020
//
// 00777020  e8dba9f9ff           call 0x711a00
// 00777025  50                   push eax
// 00777026  e8e37ceaff           call 0x61ed0e
// 0077702b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777020();
extern int __stdcall G2_func_00777020(int);
int func_00777020()
{
    return G2_func_00777020(G1_func_00777020());
}
