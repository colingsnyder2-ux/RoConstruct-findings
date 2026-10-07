// roc 2010-06 0099c050  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c050
//
// 0099c050  b9d8abc100           mov ecx, 0xc1abd8
// 0099c055  e96671b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c050 { void m(); };
extern T_func_0099c050 G1_func_0099c050;
void func_0099c050()
{
    G1_func_0099c050.m();
}
