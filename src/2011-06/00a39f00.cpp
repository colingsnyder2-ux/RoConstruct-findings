// roc 2011-06 00a39f00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39f00
//
// 00a39f00  b90cc2cc00           mov ecx, 0xccc20c
// 00a39f05  e90626a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39f00 { void m(); };
extern T_func_00a39f00 G1_func_00a39f00;
void func_00a39f00()
{
    G1_func_00a39f00.m();
}
