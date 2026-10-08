// roc 2007-03 00777070  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777070
//
// 00777070  e8dbc7f9ff           call 0x713850
// 00777075  50                   push eax
// 00777076  e8937ceaff           call 0x61ed0e
// 0077707b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00777070();
extern int __stdcall G2_func_00777070(int);
int func_00777070()
{
    return G2_func_00777070(G1_func_00777070());
}
