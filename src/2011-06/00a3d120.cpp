// roc 2011-06 00a3d120  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d120
//
// 00a3d120  b98819cd00           mov ecx, 0xcd1988
// 00a3d125  e9862ea9ff           jmp 0x4cffb0
// auto-matched from its assembly shape

struct T_func_00a3d120 { void m(); };
extern T_func_00a3d120 G1_func_00a3d120;
void func_00a3d120()
{
    G1_func_00a3d120.m();
}
