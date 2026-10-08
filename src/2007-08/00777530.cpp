// roc 2007-08 00777530  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777530
//
// 00777530  b9d0af8b00           mov ecx, 0x8bafd0
// 00777535  e9b616caff           jmp 0x418bf0
// auto-matched from its assembly shape

struct T_func_00777530 { void m(); };
extern T_func_00777530 G1_func_00777530;
void func_00777530()
{
    G1_func_00777530.m();
}
