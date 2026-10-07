// roc 2007-08 00776fa0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776fa0
//
// 00776fa0  e86b2cfaff           call 0x719c10
// 00776fa5  50                   push eax
// 00776fa6  e84595ebff           call 0x6304f0
// 00776fab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776fa0();
extern int __stdcall G2_func_00776fa0(int);
int func_00776fa0()
{
    return G2_func_00776fa0(G1_func_00776fa0());
}
