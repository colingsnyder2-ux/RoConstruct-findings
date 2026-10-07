// roc 2011-06 00a3f250  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f250
//
// 00a3f250  b9384acd00           mov ecx, 0xcd4a38
// 00a3f255  e9c60daaff           jmp 0x4e0020
// auto-matched from its assembly shape

struct T_func_00a3f250 { void m(); };
extern T_func_00a3f250 G1_func_00a3f250;
void func_00a3f250()
{
    G1_func_00a3f250.m();
}
