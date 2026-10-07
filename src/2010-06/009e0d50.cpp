// roc 2010-06 009e0d50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d50
//
// 009e0d50  b990d4c000           mov ecx, 0xc0d490
// 009e0d55  e92698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d50 { void m(); };
extern T_func_009e0d50 G1_func_009e0d50;
void func_009e0d50()
{
    G1_func_009e0d50.m();
}
