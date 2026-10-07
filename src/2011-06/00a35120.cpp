// roc 2011-06 00a35120  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35120
//
// 00a35120  b9d0c1cb00           mov ecx, 0xcbc1d0
// 00a35125  e9e673a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a35120 { void m(); };
extern T_func_00a35120 G1_func_00a35120;
void func_00a35120()
{
    G1_func_00a35120.m();
}
