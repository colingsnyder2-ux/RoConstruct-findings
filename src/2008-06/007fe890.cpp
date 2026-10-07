// roc 2008-06 007fe890  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe890
//
// 007fe890  b9a0899700           mov ecx, 0x9789a0
// 007fe895  e926c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe890 { void m(); };
extern T_func_007fe890 G1_func_007fe890;
void func_007fe890()
{
    G1_func_007fe890.m();
}
