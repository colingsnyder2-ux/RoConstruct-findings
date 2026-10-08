// roc 2007-08 00778bb0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778bb0
//
// 00778bb0  b9a8eb8b00           mov ecx, 0x8beba8
// 00778bb5  e956eac9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778bb0 { void m(); };
extern T_func_00778bb0 G1_func_00778bb0;
void func_00778bb0()
{
    G1_func_00778bb0.m();
}
