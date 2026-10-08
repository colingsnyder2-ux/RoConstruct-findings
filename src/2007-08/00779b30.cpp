// roc 2007-08 00779b30  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779b30
//
// 00779b30  b9b01d8c00           mov ecx, 0x8c1db0
// 00779b35  e9e6bbfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00779b30 { void m(); };
extern T_func_00779b30 G1_func_00779b30;
void func_00779b30()
{
    G1_func_00779b30.m();
}
