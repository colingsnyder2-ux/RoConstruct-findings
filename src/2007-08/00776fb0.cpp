// roc 2007-08 00776fb0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776fb0
//
// 00776fb0  e87b6efaff           call 0x71de30
// 00776fb5  50                   push eax
// 00776fb6  e83595ebff           call 0x6304f0
// 00776fbb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776fb0();
extern int __stdcall G2_func_00776fb0(int);
int func_00776fb0()
{
    return G2_func_00776fb0(G1_func_00776fb0());
}
