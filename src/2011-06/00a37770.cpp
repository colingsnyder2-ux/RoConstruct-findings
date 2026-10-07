// roc 2011-06 00a37770  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37770
//
// 00a37770  b9b031cc00           mov ecx, 0xcc31b0
// 00a37775  e9c6639dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37770 { void m(); };
extern T_func_00a37770 G1_func_00a37770;
void func_00a37770()
{
    G1_func_00a37770.m();
}
