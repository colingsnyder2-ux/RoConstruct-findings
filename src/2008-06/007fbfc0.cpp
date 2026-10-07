// roc 2008-06 007fbfc0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbfc0
//
// 007fbfc0  b998149700           mov ecx, 0x971498
// 007fbfc5  e9f6ebc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fbfc0 { void m(); };
extern T_func_007fbfc0 G1_func_007fbfc0;
void func_007fbfc0()
{
    G1_func_007fbfc0.m();
}
