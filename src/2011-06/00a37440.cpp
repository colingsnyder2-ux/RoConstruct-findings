// roc 2011-06 00a37440  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37440
//
// 00a37440  b9b85ccc00           mov ecx, 0xcc5cb8
// 00a37445  e9f6669dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37440 { void m(); };
extern T_func_00a37440 G1_func_00a37440;
void func_00a37440()
{
    G1_func_00a37440.m();
}
