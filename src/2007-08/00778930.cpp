// roc 2007-08 00778930  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778930
//
// 00778930  b940e78b00           mov ecx, 0x8be740
// 00778935  e986e3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00778930 { void m(); };
extern T_func_00778930 G1_func_00778930;
void func_00778930()
{
    G1_func_00778930.m();
}
