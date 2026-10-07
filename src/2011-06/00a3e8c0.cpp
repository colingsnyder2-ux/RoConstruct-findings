// roc 2011-06 00a3e8c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e8c0
//
// 00a3e8c0  b9303bcd00           mov ecx, 0xcd3b30
// 00a3e8c5  e9f6e7a6ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3e8c0 { void m(); };
extern T_func_00a3e8c0 G1_func_00a3e8c0;
void func_00a3e8c0()
{
    G1_func_00a3e8c0.m();
}
