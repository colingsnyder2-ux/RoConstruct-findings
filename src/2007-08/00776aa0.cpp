// roc 2007-08 00776aa0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776aa0
//
// 00776aa0  e8abfdf4ff           call 0x6c6850
// 00776aa5  50                   push eax
// 00776aa6  e8459aebff           call 0x6304f0
// 00776aab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776aa0();
extern int __stdcall G2_func_00776aa0(int);
int func_00776aa0()
{
    return G2_func_00776aa0(G1_func_00776aa0());
}
