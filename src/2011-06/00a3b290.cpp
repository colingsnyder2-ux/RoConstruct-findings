// roc 2011-06 00a3b290  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b290
//
// 00a3b290  b948e2cc00           mov ecx, 0xcce248
// 00a3b295  e97612a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b290 { void m(); };
extern T_func_00a3b290 G1_func_00a3b290;
void func_00a3b290()
{
    G1_func_00a3b290.m();
}
