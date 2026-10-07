// roc 2008-06 00800bf0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800bf0
//
// 00800bf0  b918cd9700           mov ecx, 0x97cd18
// 00800bf5  e9c69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800bf0 { void m(); };
extern T_func_00800bf0 G1_func_00800bf0;
void func_00800bf0()
{
    G1_func_00800bf0.m();
}
