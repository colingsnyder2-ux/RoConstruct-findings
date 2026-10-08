// roc 2007-08 00779460  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779460
//
// 00779460  b978108c00           mov ecx, 0x8c1078
// 00779465  e956d8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00779460 { void m(); };
extern T_func_00779460 G1_func_00779460;
void func_00779460()
{
    G1_func_00779460.m();
}
