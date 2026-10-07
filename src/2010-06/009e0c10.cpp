// roc 2010-06 009e0c10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c10
//
// 009e0c10  b990e8c000           mov ecx, 0xc0e890
// 009e0c15  e96699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c10 { void m(); };
extern T_func_009e0c10 G1_func_009e0c10;
void func_009e0c10()
{
    G1_func_009e0c10.m();
}
