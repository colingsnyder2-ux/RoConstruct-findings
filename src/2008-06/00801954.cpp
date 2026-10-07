// roc 2008-06 00801954  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801954
//
// 00801954  b9e0f29700           mov ecx, 0x97f2e0
// 00801959  e9b443faff           jmp 0x7a5d12
// auto-matched from its assembly shape

struct T_func_00801954 { void m(); };
extern T_func_00801954 G1_func_00801954;
void func_00801954()
{
    G1_func_00801954.m();
}
