// roc 2011-06 00a37760  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37760
//
// 00a37760  b98832cc00           mov ecx, 0xcc3288
// 00a37765  e9d6639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37760 { void m(); };
extern T_func_00a37760 G1_func_00a37760;
void func_00a37760()
{
    G1_func_00a37760.m();
}
