// roc 2011-06 00a37ee0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ee0
//
// 00a37ee0  b9f08dcc00           mov ecx, 0xcc8df0
// 00a37ee5  e926d0b8ff           jmp 0x5c4f10
// auto-matched from its assembly shape

struct T_func_00a37ee0 { void m(); };
extern T_func_00a37ee0 G1_func_00a37ee0;
void func_00a37ee0()
{
    G1_func_00a37ee0.m();
}
