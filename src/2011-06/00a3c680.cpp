// roc 2011-06 00a3c680  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c680
//
// 00a3c680  b95005cd00           mov ecx, 0xcd0550
// 00a3c685  e9360aa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c680 { void m(); };
extern T_func_00a3c680 G1_func_00a3c680;
void func_00a3c680()
{
    G1_func_00a3c680.m();
}
