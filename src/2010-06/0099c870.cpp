// roc 2010-06 0099c870  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099c870
//
// 0099c870  b910b4c100           mov ecx, 0xc1b410
// 0099c875  e94669b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099c870 { void m(); };
extern T_func_0099c870 G1_func_0099c870;
void func_0099c870()
{
    G1_func_0099c870.m();
}
