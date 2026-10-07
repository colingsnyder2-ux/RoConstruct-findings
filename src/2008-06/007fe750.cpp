// roc 2008-06 007fe750  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe750
//
// 007fe750  b940929700           mov ecx, 0x979240
// 007fe755  e966c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe750 { void m(); };
extern T_func_007fe750 G1_func_007fe750;
void func_007fe750()
{
    G1_func_007fe750.m();
}
