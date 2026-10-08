// roc 2007-08 00779a80  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a80
//
// 00779a80  b9601c8c00           mov ecx, 0x8c1c60
// 00779a85  e996bcfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00779a80 { void m(); };
extern T_func_00779a80 G1_func_00779a80;
void func_00779a80()
{
    G1_func_00779a80.m();
}
