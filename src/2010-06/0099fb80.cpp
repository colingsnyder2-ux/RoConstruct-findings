// roc 2010-06 0099fb80  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0099fb80
//
// 0099fb80  b9a8d8c100           mov ecx, 0xc1d8a8
// 0099fb85  e93636b0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_0099fb80 { void m(); };
extern T_func_0099fb80 G1_func_0099fb80;
void func_0099fb80()
{
    G1_func_0099fb80.m();
}
