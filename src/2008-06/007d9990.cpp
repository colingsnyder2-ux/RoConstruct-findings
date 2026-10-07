// roc 2008-06 007d9990  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9990
//
// 007d9990  b928c09700           mov ecx, 0x97c028
// 007d9995  e9b6ffc2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9990 { void m(); };
extern T_func_007d9990 G1_func_007d9990;
void func_007d9990()
{
    G1_func_007d9990.m();
}
