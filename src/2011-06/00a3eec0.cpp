// roc 2011-06 00a3eec0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eec0
//
// 00a3eec0  b9e844cd00           mov ecx, 0xcd44e8
// 00a3eec5  e926efbdff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3eec0 { void m(); };
extern T_func_00a3eec0 G1_func_00a3eec0;
void func_00a3eec0()
{
    G1_func_00a3eec0.m();
}
