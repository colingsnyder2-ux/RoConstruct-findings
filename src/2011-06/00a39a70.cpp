// roc 2011-06 00a39a70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39a70
//
// 00a39a70  b938bbcc00           mov ecx, 0xccbb38
// 00a39a75  e9962aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39a70 { void m(); };
extern T_func_00a39a70 G1_func_00a39a70;
void func_00a39a70()
{
    G1_func_00a39a70.m();
}
