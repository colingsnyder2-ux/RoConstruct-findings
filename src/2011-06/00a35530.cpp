// roc 2011-06 00a35530  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35530
//
// 00a35530  b940d7cb00           mov ecx, 0xcbd740
// 00a35535  e9d66fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35530 { void m(); };
extern T_func_00a35530 G1_func_00a35530;
void func_00a35530()
{
    G1_func_00a35530.m();
}
