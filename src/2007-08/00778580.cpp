// roc 2007-08 00778580  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778580
//
// 00778580  b9b8e18b00           mov ecx, 0x8be1b8
// 00778585  e9e6fec9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778580 { void m(); };
extern T_func_00778580 G1_func_00778580;
void func_00778580()
{
    G1_func_00778580.m();
}
