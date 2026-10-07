// roc 2011-06 00a37240  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37240
//
// 00a37240  b9b877cc00           mov ecx, 0xcc77b8
// 00a37245  e9f6689dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37240 { void m(); };
extern T_func_00a37240 G1_func_00a37240;
void func_00a37240()
{
    G1_func_00a37240.m();
}
