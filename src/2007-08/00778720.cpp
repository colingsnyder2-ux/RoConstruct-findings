// roc 2007-08 00778720  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778720
//
// 00778720  b97ce58b00           mov ecx, 0x8be57c
// 00778725  e9e6eec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778720 { void m(); };
extern T_func_00778720 G1_func_00778720;
void func_00778720()
{
    G1_func_00778720.m();
}
