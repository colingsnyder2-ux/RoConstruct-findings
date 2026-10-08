// roc 2007-03 00776200  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776200
//
// 00776200  e85ba6eaff           call 0x620860
// 00776205  50                   push eax
// 00776206  e8038beaff           call 0x61ed0e
// 0077620b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776200();
extern int __stdcall G2_func_00776200(int);
int func_00776200()
{
    return G2_func_00776200(G1_func_00776200());
}
