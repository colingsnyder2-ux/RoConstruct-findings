// roc 2010-06 0099ee80  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ee80
//
// 0099ee80  b9e0c6c100           mov ecx, 0xc1c6e0
// 0099ee85  e93643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ee80 { void m(); };
extern T_func_0099ee80 G1_func_0099ee80;
void func_0099ee80()
{
    G1_func_0099ee80.m();
}
