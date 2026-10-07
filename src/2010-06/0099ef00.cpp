// roc 2010-06 0099ef00  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ef00
//
// 0099ef00  b9e8c9c100           mov ecx, 0xc1c9e8
// 0099ef05  e9b642b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ef00 { void m(); };
extern T_func_0099ef00 G1_func_0099ef00;
void func_0099ef00()
{
    G1_func_0099ef00.m();
}
