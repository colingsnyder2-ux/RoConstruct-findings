// roc 2007-08 00779dc0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779dc0
//
// 00779dc0  b940238c00           mov ecx, 0x8c2340
// 00779dc5  e9f6cec9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779dc0 { void m(); };
extern T_func_00779dc0 G1_func_00779dc0;
void func_00779dc0()
{
    G1_func_00779dc0.m();
}
