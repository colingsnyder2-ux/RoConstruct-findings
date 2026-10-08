// roc 2007-08 00777a60  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777a60
//
// 00777a60  b9ccba8b00           mov ecx, 0x8bbacc
// 00777a65  e9b6dcfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00777a60 { void m(); };
extern T_func_00777a60 G1_func_00777a60;
void func_00777a60()
{
    G1_func_00777a60.m();
}
