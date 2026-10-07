// roc 2010-06 0099fc60  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fc60
//
// 0099fc60  b9c0d6c100           mov ecx, 0xc1d6c0
// 0099fc65  e95635b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fc60 { void m(); };
extern T_func_0099fc60 G1_func_0099fc60;
void func_0099fc60()
{
    G1_func_0099fc60.m();
}
