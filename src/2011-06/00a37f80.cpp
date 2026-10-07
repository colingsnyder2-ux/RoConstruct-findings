// roc 2011-06 00a37f80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37f80
//
// 00a37f80  b96087cc00           mov ecx, 0xcc8760
// 00a37f85  e956b7b8ff           jmp 0x5c36e0
// auto-matched from its assembly shape

struct T_func_00a37f80 { void m(); };
extern T_func_00a37f80 G1_func_00a37f80;
void func_00a37f80()
{
    G1_func_00a37f80.m();
}
