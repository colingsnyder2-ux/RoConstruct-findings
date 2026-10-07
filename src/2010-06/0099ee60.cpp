// roc 2010-06 0099ee60  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ee60
//
// 0099ee60  b9c8c8c100           mov ecx, 0xc1c8c8
// 0099ee65  e95643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ee60 { void m(); };
extern T_func_0099ee60 G1_func_0099ee60;
void func_0099ee60()
{
    G1_func_0099ee60.m();
}
