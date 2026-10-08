// roc 2007-08 0077aab0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aab0
//
// 0077aab0  b918428c00           mov ecx, 0x8c4218
// 0077aab5  e906c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aab0 { void m(); };
extern T_func_0077aab0 G1_func_0077aab0;
void func_0077aab0()
{
    G1_func_0077aab0.m();
}
