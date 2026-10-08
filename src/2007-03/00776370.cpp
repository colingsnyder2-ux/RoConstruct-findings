// roc 2007-03 00776370  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776370
//
// 00776370  e8db7eedff           call 0x64e250
// 00776375  50                   push eax
// 00776376  e89389eaff           call 0x61ed0e
// 0077637b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776370();
extern int __stdcall G2_func_00776370(int);
int func_00776370()
{
    return G2_func_00776370(G1_func_00776370());
}
