// roc 2007-08 00777db0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777db0
//
// 00777db0  b980bd8b00           mov ecx, 0x8bbd80
// 00777db5  e97625cdff           jmp 0x44a330
// auto-matched from its assembly shape

struct T_func_00777db0 { void m(); };
extern T_func_00777db0 G1_func_00777db0;
void func_00777db0()
{
    G1_func_00777db0.m();
}
