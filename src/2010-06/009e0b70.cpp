// roc 2010-06 009e0b70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0b70
//
// 009e0b70  b990f2c000           mov ecx, 0xc0f290
// 009e0b75  e9069aa2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0b70 { void m(); };
extern T_func_009e0b70 G1_func_009e0b70;
void func_009e0b70()
{
    G1_func_009e0b70.m();
}
