// roc 2011-06 00a33040  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33040
//
// 00a33040  b98068cb00           mov ecx, 0xcb6880
// 00a33045  e976a0a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a33040 { void m(); };
extern T_func_00a33040 G1_func_00a33040;
void func_00a33040()
{
    G1_func_00a33040.m();
}
