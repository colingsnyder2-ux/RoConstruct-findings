// roc 2007-08 00777cf0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777cf0
//
// 00777cf0  b9e8ba8b00           mov ecx, 0x8bbae8
// 00777cf5  e936e5ccff           jmp 0x446230
// auto-matched from its assembly shape

struct T_func_00777cf0 { void m(); };
extern T_func_00777cf0 G1_func_00777cf0;
void func_00777cf0()
{
    G1_func_00777cf0.m();
}
