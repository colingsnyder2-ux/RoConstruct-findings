// roc 2007-08 0077aa00  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa00
//
// 0077aa00  b948488c00           mov ecx, 0x8c4848
// 0077aa05  e9b6c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa00 { void m(); };
extern T_func_0077aa00 G1_func_0077aa00;
void func_0077aa00()
{
    G1_func_0077aa00.m();
}
