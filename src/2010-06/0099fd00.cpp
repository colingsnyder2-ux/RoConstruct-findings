// roc 2010-06 0099fd00  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fd00
//
// 0099fd00  b9b0cfc100           mov ecx, 0xc1cfb0
// 0099fd05  e9b634b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fd00 { void m(); };
extern T_func_0099fd00 G1_func_0099fd00;
void func_0099fd00()
{
    G1_func_0099fd00.m();
}
