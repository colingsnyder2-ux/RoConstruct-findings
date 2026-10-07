// roc 2010-06 00998380  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998380
//
// 00998380  b94896c100           mov ecx, 0xc19648
// 00998385  e936aeb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998380 { void m(); };
extern T_func_00998380 G1_func_00998380;
void func_00998380()
{
    G1_func_00998380.m();
}
