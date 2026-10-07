// roc 2008-06 00801830  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801830
//
// 00801830  b900e99700           mov ecx, 0x97e900
// 00801835  e93653efff           jmp 0x6f6b70
// auto-matched from its assembly shape

struct T_func_00801830 { void m(); };
extern T_func_00801830 G1_func_00801830;
void func_00801830()
{
    G1_func_00801830.m();
}
