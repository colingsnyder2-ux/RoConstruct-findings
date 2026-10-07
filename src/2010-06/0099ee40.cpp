// roc 2010-06 0099ee40  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ee40
//
// 0099ee40  b968c9c100           mov ecx, 0xc1c968
// 0099ee45  e97643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ee40 { void m(); };
extern T_func_0099ee40 G1_func_0099ee40;
void func_0099ee40()
{
    G1_func_0099ee40.m();
}
