// roc 2007-03 00776360  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776360
//
// 00776360  e8fb7cedff           call 0x64e060
// 00776365  50                   push eax
// 00776366  e8a389eaff           call 0x61ed0e
// 0077636b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776360();
extern int __stdcall G2_func_00776360(int);
int func_00776360()
{
    return G2_func_00776360(G1_func_00776360());
}
