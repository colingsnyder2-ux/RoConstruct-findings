// roc 2010-06 009e3df0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3df0
//
// 009e3df0  b940bdc100           mov ecx, 0xc1bd40
// 009e3df5  e98667a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e3df0 { void m(); };
extern T_func_009e3df0 G1_func_009e3df0;
void func_009e3df0()
{
    G1_func_009e3df0.m();
}
