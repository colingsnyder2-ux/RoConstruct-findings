// roc 2011-06 00a35130  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35130
//
// 00a35130  b914c1cb00           mov ecx, 0xcbc114
// 00a35135  e9d673a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35130 { void m(); };
extern T_func_00a35130 G1_func_00a35130;
void func_00a35130()
{
    G1_func_00a35130.m();
}
