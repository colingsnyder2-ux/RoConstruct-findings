// roc 2010-06 009e2450  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2450
//
// 009e2450  b9988ac100           mov ecx, 0xc18a98
// 009e2455  e9f6edd0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e2450 { void m(); };
extern T_func_009e2450 G1_func_009e2450;
void func_009e2450()
{
    G1_func_009e2450.m();
}
