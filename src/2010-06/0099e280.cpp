// roc 2010-06 0099e280  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099e280
//
// 0099e280  b980c5c100           mov ecx, 0xc1c580
// 0099e285  e9364fb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099e280 { void m(); };
extern T_func_0099e280 G1_func_0099e280;
void func_0099e280()
{
    G1_func_0099e280.m();
}
