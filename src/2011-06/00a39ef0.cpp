// roc 2011-06 00a39ef0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39ef0
//
// 00a39ef0  b94cc3cc00           mov ecx, 0xccc34c
// 00a39ef5  e91626a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39ef0 { void m(); };
extern T_func_00a39ef0 G1_func_00a39ef0;
void func_00a39ef0()
{
    G1_func_00a39ef0.m();
}
