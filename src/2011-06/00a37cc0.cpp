// roc 2011-06 00a37cc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37cc0
//
// 00a37cc0  b9f8e9cb00           mov ecx, 0xcbe9f8
// 00a37cc5  e9765e9dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37cc0 { void m(); };
extern T_func_00a37cc0 G1_func_00a37cc0;
void func_00a37cc0()
{
    G1_func_00a37cc0.m();
}
