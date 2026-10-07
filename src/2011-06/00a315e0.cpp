// roc 2011-06 00a315e0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a315e0
//
// 00a315e0  b96030cb00           mov ecx, 0xcb3060
// 00a315e5  e9061fa2ff           jmp 0x4534f0
// auto-matched from its assembly shape

struct T_func_00a315e0 { void m(); };
extern T_func_00a315e0 G1_func_00a315e0;
void func_00a315e0()
{
    G1_func_00a315e0.m();
}
