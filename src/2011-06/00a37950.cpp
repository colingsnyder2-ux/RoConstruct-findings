// roc 2011-06 00a37950  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37950
//
// 00a37950  b96018cc00           mov ecx, 0xcc1860
// 00a37955  e9e6619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37950 { void m(); };
extern T_func_00a37950 G1_func_00a37950;
void func_00a37950()
{
    G1_func_00a37950.m();
}
