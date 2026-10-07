// roc 2010-06 009e0e70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e70
//
// 009e0e70  b990c2c000           mov ecx, 0xc0c290
// 009e0e75  e90697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e70 { void m(); };
extern T_func_009e0e70 G1_func_009e0e70;
void func_009e0e70()
{
    G1_func_009e0e70.m();
}
