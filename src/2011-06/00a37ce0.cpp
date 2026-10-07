// roc 2011-06 00a37ce0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ce0
//
// 00a37ce0  b948e8cb00           mov ecx, 0xcbe848
// 00a37ce5  e9565e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ce0 { void m(); };
extern T_func_00a37ce0 G1_func_00a37ce0;
void func_00a37ce0()
{
    G1_func_00a37ce0.m();
}
