// roc 2010-06 00991c40  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00991c40
//
// 00991c40  b918b2c000           mov ecx, 0xc0b218
// 00991c45  e97615b1ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00991c40 { void m(); };
extern T_func_00991c40 G1_func_00991c40;
void func_00991c40()
{
    G1_func_00991c40.m();
}
