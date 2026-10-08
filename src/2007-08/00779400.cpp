// roc 2007-08 00779400  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779400
//
// 00779400  b9e80f8c00           mov ecx, 0x8c0fe8
// 00779405  e9b6d8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779400 { void m(); };
extern T_func_00779400 G1_func_00779400;
void func_00779400()
{
    G1_func_00779400.m();
}
