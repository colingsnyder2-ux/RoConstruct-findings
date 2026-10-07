// roc 2008-06 007ff200  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff200
//
// 007ff200  b9e09e9700           mov ecx, 0x979ee0
// 007ff205  e9b6b9c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007ff200 { void m(); };
extern T_func_007ff200 G1_func_007ff200;
void func_007ff200()
{
    G1_func_007ff200.m();
}
