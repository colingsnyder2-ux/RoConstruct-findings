// roc 2010-06 00992490  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992490
//
// 00992490  b990b8c000           mov ecx, 0xc0b890
// 00992495  e9260db1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992490 { void m(); };
extern T_func_00992490 G1_func_00992490;
void func_00992490()
{
    G1_func_00992490.m();
}
