// roc 2011-06 00a37280  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37280
//
// 00a37280  b95874cc00           mov ecx, 0xcc7458
// 00a37285  e9b6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37280 { void m(); };
extern T_func_00a37280 G1_func_00a37280;
void func_00a37280()
{
    G1_func_00a37280.m();
}
