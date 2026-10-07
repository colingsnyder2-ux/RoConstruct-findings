// roc 2008-06 00801850  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801850
//
// 00801850  b92ce99700           mov ecx, 0x97e92c
// 00801855  e9f0acfbff           jmp 0x7bc54a
// auto-matched from its assembly shape

struct T_func_00801850 { void m(); };
extern T_func_00801850 G1_func_00801850;
void func_00801850()
{
    G1_func_00801850.m();
}
