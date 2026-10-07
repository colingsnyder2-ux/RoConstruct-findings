// roc 2010-06 0099c890  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c890
//
// 0099c890  b908b3c100           mov ecx, 0xc1b308
// 0099c895  e92669b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c890 { void m(); };
extern T_func_0099c890 G1_func_0099c890;
void func_0099c890()
{
    G1_func_0099c890.m();
}
