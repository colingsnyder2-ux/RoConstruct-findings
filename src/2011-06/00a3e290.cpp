// roc 2011-06 00a3e290  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e290
//
// 00a3e290  b99c31cd00           mov ecx, 0xcd319c
// 00a3e295  e976e2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e290 { void m(); };
extern T_func_00a3e290 G1_func_00a3e290;
void func_00a3e290()
{
    G1_func_00a3e290.m();
}
