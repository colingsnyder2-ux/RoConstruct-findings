// roc 2007-03 00777000  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777000
//
// 00777000  e8fba8f9ff           call 0x711900
// 00777005  50                   push eax
// 00777006  e8037deaff           call 0x61ed0e
// 0077700b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777000();
extern int __stdcall G2_func_00777000(int);
int func_00777000()
{
    return G2_func_00777000(G1_func_00777000());
}
