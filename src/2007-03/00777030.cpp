// roc 2007-03 00777030  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777030
//
// 00777030  e82baaf9ff           call 0x711a60
// 00777035  50                   push eax
// 00777036  e8d37ceaff           call 0x61ed0e
// 0077703b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777030();
extern int __stdcall G2_func_00777030(int);
int func_00777030()
{
    return G2_func_00777030(G1_func_00777030());
}
