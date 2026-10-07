// roc 2011-06 00a3e280  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e280
//
// 00a3e280  b96831cd00           mov ecx, 0xcd3168
// 00a3e285  e986e2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e280 { void m(); };
extern T_func_00a3e280 G1_func_00a3e280;
void func_00a3e280()
{
    G1_func_00a3e280.m();
}
