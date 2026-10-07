// roc 2010-06 0099ee20  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099ee20
//
// 0099ee20  b940c8c100           mov ecx, 0xc1c840
// 0099ee25  e99643b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099ee20 { void m(); };
extern T_func_0099ee20 G1_func_0099ee20;
void func_0099ee20()
{
    G1_func_0099ee20.m();
}
