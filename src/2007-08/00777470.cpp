// roc 2007-08 00777470  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777470
//
// 00777470  b9d0b38b00           mov ecx, 0x8bb3d0
// 00777475  e946f8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777470 { void m(); };
extern T_func_00777470 G1_func_00777470;
void func_00777470()
{
    G1_func_00777470.m();
}
