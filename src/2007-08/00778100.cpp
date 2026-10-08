// roc 2007-08 00778100  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778100
//
// 00778100  b990dd8b00           mov ecx, 0x8bdd90
// 00778105  e96603caff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778100 { void m(); };
extern T_func_00778100 G1_func_00778100;
void func_00778100()
{
    G1_func_00778100.m();
}
