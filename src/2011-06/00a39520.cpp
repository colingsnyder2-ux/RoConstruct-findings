// roc 2011-06 00a39520  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39520
//
// 00a39520  b968abcc00           mov ecx, 0xccab68
// 00a39525  e9e62fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39520 { void m(); };
extern T_func_00a39520 G1_func_00a39520;
void func_00a39520()
{
    G1_func_00a39520.m();
}
