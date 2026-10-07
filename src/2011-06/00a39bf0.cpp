// roc 2011-06 00a39bf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39bf0
//
// 00a39bf0  b900bccc00           mov ecx, 0xccbc00
// 00a39bf5  e9b663a9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a39bf0 { void m(); };
extern T_func_00a39bf0 G1_func_00a39bf0;
void func_00a39bf0()
{
    G1_func_00a39bf0.m();
}
