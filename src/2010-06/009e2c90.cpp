// roc 2010-06 009e2c90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2c90
//
// 009e2c90  b9a09cc100           mov ecx, 0xc19ca0
// 009e2c95  e9a618c2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2c90 { void m(); };
extern T_func_009e2c90 G1_func_009e2c90;
void func_009e2c90()
{
    G1_func_009e2c90.m();
}
