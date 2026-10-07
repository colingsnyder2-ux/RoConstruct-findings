// roc 2010-06 0099e050  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099e050
//
// 0099e050  b9d8c3c100           mov ecx, 0xc1c3d8
// 0099e055  e96651b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099e050 { void m(); };
extern T_func_0099e050 G1_func_0099e050;
void func_0099e050()
{
    G1_func_0099e050.m();
}
