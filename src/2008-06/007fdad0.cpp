// roc 2008-06 007fdad0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdad0
//
// 007fdad0  b9985c9700           mov ecx, 0x975c98
// 007fdad5  e92680d9ff           jmp 0x595b00
// auto-matched from its assembly shape

struct T_func_007fdad0 { void m(); };
extern T_func_007fdad0 G1_func_007fdad0;
void func_007fdad0()
{
    G1_func_007fdad0.m();
}
