// roc 2011-06 00a37db0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37db0
//
// 00a37db0  b9689acc00           mov ecx, 0xcc9a68
// 00a37db5  e99603b9ff           jmp 0x5c8150
// auto-matched from its assembly shape

struct T_func_00a37db0 { void m(); };
extern T_func_00a37db0 G1_func_00a37db0;
void func_00a37db0()
{
    G1_func_00a37db0.m();
}
