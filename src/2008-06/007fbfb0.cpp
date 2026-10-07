// roc 2008-06 007fbfb0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbfb0
//
// 007fbfb0  b980159700           mov ecx, 0x971580
// 007fbfb5  e906ecc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fbfb0 { void m(); };
extern T_func_007fbfb0 G1_func_007fbfb0;
void func_007fbfb0()
{
    G1_func_007fbfb0.m();
}
