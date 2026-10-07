// roc 2011-06 00a35380  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35380
//
// 00a35380  b988d3cb00           mov ecx, 0xcbd388
// 00a35385  e9f6bbb6ff           jmp 0x5a0f80
// auto-matched from its assembly shape

struct T_func_00a35380 { void m(); };
extern T_func_00a35380 G1_func_00a35380;
void func_00a35380()
{
    G1_func_00a35380.m();
}
