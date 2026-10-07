// roc 2011-06 00a3e270  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e270
//
// 00a3e270  b90c32cd00           mov ecx, 0xcd320c
// 00a3e275  e996e2a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3e270 { void m(); };
extern T_func_00a3e270 G1_func_00a3e270;
void func_00a3e270()
{
    G1_func_00a3e270.m();
}
