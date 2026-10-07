// roc 2011-06 00a3ed80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ed80
//
// 00a3ed80  b9a841cd00           mov ecx, 0xcd41a8
// 00a3ed85  e936e3a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3ed80 { void m(); };
extern T_func_00a3ed80 G1_func_00a3ed80;
void func_00a3ed80()
{
    G1_func_00a3ed80.m();
}
