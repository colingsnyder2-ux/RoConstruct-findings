// roc 2010-06 0099fd40  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fd40
//
// 0099fd40  b930d1c100           mov ecx, 0xc1d130
// 0099fd45  e97634b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fd40 { void m(); };
extern T_func_0099fd40 G1_func_0099fd40;
void func_0099fd40()
{
    G1_func_0099fd40.m();
}
