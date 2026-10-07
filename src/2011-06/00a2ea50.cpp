// roc 2011-06 00a2ea50  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea50
//
// 00a2ea50  b93f5dcd00           mov ecx, 0xcd5d3f
// 00a2ea55  e9c6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea50 { void m(); };
extern T_func_00a2ea50 G1_func_00a2ea50;
void func_00a2ea50()
{
    G1_func_00a2ea50.m();
}
