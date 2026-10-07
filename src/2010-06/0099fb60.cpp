// roc 2010-06 0099fb60  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fb60
//
// 0099fb60  b980d6c100           mov ecx, 0xc1d680
// 0099fb65  e95636b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fb60 { void m(); };
extern T_func_0099fb60 G1_func_0099fb60;
void func_0099fb60()
{
    G1_func_0099fb60.m();
}
