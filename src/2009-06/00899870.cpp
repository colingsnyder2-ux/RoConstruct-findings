// roc 2009-06 00899870  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899870
//
// 00899870  b9b0ada400           mov ecx, 0xa4adb0
// 00899875  e9965fd3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_00899870 { void m(); };
extern T_func_00899870 G1_func_00899870;
void func_00899870()
{
    G1_func_00899870.m();
}
