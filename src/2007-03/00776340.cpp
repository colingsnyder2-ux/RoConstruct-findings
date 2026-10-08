// roc 2007-03 00776340  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776340
//
// 00776340  e8eb76edff           call 0x64da30
// 00776345  50                   push eax
// 00776346  e8c389eaff           call 0x61ed0e
// 0077634b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776340();
extern int __stdcall G2_func_00776340(int);
int func_00776340()
{
    return G2_func_00776340(G1_func_00776340());
}
