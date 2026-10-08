// roc 2007-03 00777060  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777060
//
// 00777060  e80babf9ff           call 0x711b70
// 00777065  50                   push eax
// 00777066  e8a37ceaff           call 0x61ed0e
// 0077706b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777060();
extern int __stdcall G2_func_00777060(int);
int func_00777060()
{
    return G2_func_00777060(G1_func_00777060());
}
