// roc 2008-06 007fbbd0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbbd0
//
// 007fbbd0  b9f00d9700           mov ecx, 0x970df0
// 007fbbd5  e9e6efc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fbbd0 { void m(); };
extern T_func_007fbbd0 G1_func_007fbbd0;
void func_007fbbd0()
{
    G1_func_007fbbd0.m();
}
