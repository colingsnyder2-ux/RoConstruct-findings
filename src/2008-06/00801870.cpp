// roc 2008-06 00801870  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801870
//
// 00801870  b988ea9700           mov ecx, 0x97ea88
// 00801875  e9e61ff7ff           jmp 0x773860
// auto-matched from its assembly shape

struct T_func_00801870 { void m(); };
extern T_func_00801870 G1_func_00801870;
void func_00801870()
{
    G1_func_00801870.m();
}
