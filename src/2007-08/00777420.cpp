// roc 2007-08 00777420  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777420
//
// 00777420  b900b28b00           mov ecx, 0x8bb200
// 00777425  e9f6e2faff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00777420 { void m(); };
extern T_func_00777420 G1_func_00777420;
void func_00777420()
{
    G1_func_00777420.m();
}
