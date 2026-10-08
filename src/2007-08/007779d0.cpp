// roc 2007-08 007779d0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007779d0
//
// 007779d0  b970b98b00           mov ecx, 0x8bb970
// 007779d5  e946ddfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_007779d0 { void m(); };
extern T_func_007779d0 G1_func_007779d0;
void func_007779d0()
{
    G1_func_007779d0.m();
}
