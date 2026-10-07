// roc 2011-06 00a3df20  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3df20
//
// 00a3df20  b9402ecd00           mov ecx, 0xcd2e40
// 00a3df25  e9e6e5a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3df20 { void m(); };
extern T_func_00a3df20 G1_func_00a3df20;
void func_00a3df20()
{
    G1_func_00a3df20.m();
}
