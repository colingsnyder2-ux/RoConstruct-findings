// roc 2010-06 009e0c70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c70
//
// 009e0c70  b990e2c000           mov ecx, 0xc0e290
// 009e0c75  e90699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c70 { void m(); };
extern T_func_009e0c70 G1_func_009e0c70;
void func_009e0c70()
{
    G1_func_009e0c70.m();
}
