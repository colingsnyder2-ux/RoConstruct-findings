// roc 2007-08 00779410  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779410
//
// 00779410  b9580f8c00           mov ecx, 0x8c0f58
// 00779415  e9a6d8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779410 { void m(); };
extern T_func_00779410 G1_func_00779410;
void func_00779410()
{
    G1_func_00779410.m();
}
