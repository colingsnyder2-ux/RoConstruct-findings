// roc 2010-06 00999240  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00999240
//
// 00999240  b9f899c100           mov ecx, 0xc199f8
// 00999245  e9769fb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00999240 { void m(); };
extern T_func_00999240 G1_func_00999240;
void func_00999240()
{
    G1_func_00999240.m();
}
