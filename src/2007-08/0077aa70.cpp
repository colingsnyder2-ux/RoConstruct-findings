// roc 2007-08 0077aa70  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa70
//
// 0077aa70  b918398c00           mov ecx, 0x8c3918
// 0077aa75  e946c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa70 { void m(); };
extern T_func_0077aa70 G1_func_0077aa70;
void func_0077aa70()
{
    G1_func_0077aa70.m();
}
