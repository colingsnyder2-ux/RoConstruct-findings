// roc 2007-03 00776300  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776300
//
// 00776300  e80b6becff           call 0x63ce10
// 00776305  50                   push eax
// 00776306  e8038aeaff           call 0x61ed0e
// 0077630b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776300();
extern int __stdcall G2_func_00776300(int);
int func_00776300()
{
    return G2_func_00776300(G1_func_00776300());
}
