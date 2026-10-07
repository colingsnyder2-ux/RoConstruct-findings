// roc 2011-06 00a35110  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35110
//
// 00a35110  b940c1cb00           mov ecx, 0xcbc140
// 00a35115  e9f673a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35110 { void m(); };
extern T_func_00a35110 G1_func_00a35110;
void func_00a35110()
{
    G1_func_00a35110.m();
}
