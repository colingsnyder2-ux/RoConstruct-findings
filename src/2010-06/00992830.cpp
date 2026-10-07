// roc 2010-06 00992830  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992830
//
// 00992830  b9f0bac000           mov ecx, 0xc0baf0
// 00992835  e98609b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992830 { void m(); };
extern T_func_00992830 G1_func_00992830;
void func_00992830()
{
    G1_func_00992830.m();
}
