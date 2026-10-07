// roc 2011-06 00a3edc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3edc0
//
// 00a3edc0  b91043cd00           mov ecx, 0xcd4310
// 00a3edc5  e9f6e2a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3edc0 { void m(); };
extern T_func_00a3edc0 G1_func_00a3edc0;
void func_00a3edc0()
{
    G1_func_00a3edc0.m();
}
