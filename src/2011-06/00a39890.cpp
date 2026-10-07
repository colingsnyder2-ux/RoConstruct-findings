// roc 2011-06 00a39890  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39890
//
// 00a39890  b9f8accc00           mov ecx, 0xccacf8
// 00a39895  e95645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39890 { void m(); };
extern T_func_00a39890 G1_func_00a39890;
void func_00a39890()
{
    G1_func_00a39890.m();
}
