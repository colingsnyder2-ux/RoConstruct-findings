// roc 2011-06 00a34350  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34350
//
// 00a34350  b988a3cb00           mov ecx, 0xcba388
// 00a34355  e9e663b1ff           jmp 0x54a740
// auto-matched from its assembly shape

struct T_func_00a34350 { void m(); };
extern T_func_00a34350 G1_func_00a34350;
void func_00a34350()
{
    G1_func_00a34350.m();
}
