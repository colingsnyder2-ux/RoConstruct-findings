// roc 2010-06 009e0d70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d70
//
// 009e0d70  b990d2c000           mov ecx, 0xc0d290
// 009e0d75  e90698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d70 { void m(); };
extern T_func_009e0d70 G1_func_009e0d70;
void func_009e0d70()
{
    G1_func_009e0d70.m();
}
