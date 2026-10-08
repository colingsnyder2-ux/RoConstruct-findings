// roc 2007-08 00778ba0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778ba0
//
// 00778ba0  b9f0ea8b00           mov ecx, 0x8beaf0
// 00778ba5  e966eac9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778ba0 { void m(); };
extern T_func_00778ba0 G1_func_00778ba0;
void func_00778ba0()
{
    G1_func_00778ba0.m();
}
