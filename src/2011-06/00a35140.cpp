// roc 2011-06 00a35140  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35140
//
// 00a35140  b9a4c1cb00           mov ecx, 0xcbc1a4
// 00a35145  e9c673a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35140 { void m(); };
extern T_func_00a35140 G1_func_00a35140;
void func_00a35140()
{
    G1_func_00a35140.m();
}
