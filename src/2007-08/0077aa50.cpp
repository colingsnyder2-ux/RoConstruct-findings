// roc 2007-08 0077aa50  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa50
//
// 0077aa50  b9383a8c00           mov ecx, 0x8c3a38
// 0077aa55  e966c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa50 { void m(); };
extern T_func_0077aa50 G1_func_0077aa50;
void func_0077aa50()
{
    G1_func_0077aa50.m();
}
