// roc 2007-08 00778760  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778760
//
// 00778760  b9b8e68b00           mov ecx, 0x8be6b8
// 00778765  e98604caff           jmp 0x418bf0
// auto-matched from its assembly shape

struct T_func_00778760 { void m(); };
extern T_func_00778760 G1_func_00778760;
void func_00778760()
{
    G1_func_00778760.m();
}
