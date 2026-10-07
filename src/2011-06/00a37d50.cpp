// roc 2011-06 00a37d50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d50
//
// 00a37d50  b9589ecc00           mov ecx, 0xcc9e58
// 00a37d55  e92615b9ff           jmp 0x5c9280
// auto-matched from its assembly shape

struct T_func_00a37d50 { void m(); };
extern T_func_00a37d50 G1_func_00a37d50;
void func_00a37d50()
{
    G1_func_00a37d50.m();
}
