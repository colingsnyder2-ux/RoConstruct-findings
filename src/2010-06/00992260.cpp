// roc 2010-06 00992260  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00992260
//
// 00992260  b9c0b6c000           mov ecx, 0xc0b6c0
// 00992265  e9560fb1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00992260 { void m(); };
extern T_func_00992260 G1_func_00992260;
void func_00992260()
{
    G1_func_00992260.m();
}
