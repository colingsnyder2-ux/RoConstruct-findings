// roc 2011-06 00a37f50  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f50
//
// 00a37f50  b95889cc00           mov ecx, 0xcc8958
// 00a37f55  e996bfb8ff           jmp 0x5c3ef0
// auto-matched from its assembly shape

struct T_func_00a37f50 { void m(); };
extern T_func_00a37f50 G1_func_00a37f50;
void func_00a37f50()
{
    G1_func_00a37f50.m();
}
