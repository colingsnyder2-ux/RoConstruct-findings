// roc 2007-03 00777050  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777050
//
// 00777050  e8ebaaf9ff           call 0x711b40
// 00777055  50                   push eax
// 00777056  e8b37ceaff           call 0x61ed0e
// 0077705b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777050();
extern int __stdcall G2_func_00777050(int);
int func_00777050()
{
    return G2_func_00777050(G1_func_00777050());
}
