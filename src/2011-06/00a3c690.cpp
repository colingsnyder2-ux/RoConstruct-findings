// roc 2011-06 00a3c690  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c690
//
// 00a3c690  b9a805cd00           mov ecx, 0xcd05a8
// 00a3c695  e986e1c6ff           jmp 0x6aa820
// auto-matched from its assembly shape

struct T_func_00a3c690 { void m(); };
extern T_func_00a3c690 G1_func_00a3c690;
void func_00a3c690()
{
    G1_func_00a3c690.m();
}
