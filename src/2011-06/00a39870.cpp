// roc 2011-06 00a39870  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39870
//
// 00a39870  b978adcc00           mov ecx, 0xccad78
// 00a39875  e97645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39870 { void m(); };
extern T_func_00a39870 G1_func_00a39870;
void func_00a39870()
{
    G1_func_00a39870.m();
}
