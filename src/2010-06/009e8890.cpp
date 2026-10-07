// roc 2010-06 009e8890  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8890
//
// 009e8890  b90024c200           mov ecx, 0xc22400
// 009e8895  e9d646d1ff           jmp 0x6fcf70
// auto-matched from its assembly shape

struct T_func_009e8890 { void m(); };
extern T_func_009e8890 G1_func_009e8890;
void func_009e8890()
{
    G1_func_009e8890.m();
}
