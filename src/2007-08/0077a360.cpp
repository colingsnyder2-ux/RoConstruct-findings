// roc 2007-08 0077a360  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a360
//
// 0077a360  b9382b8c00           mov ecx, 0x8c2b38
// 0077a365  e996c8dfff           jmp 0x576c00
// auto-matched from its assembly shape

struct T_func_0077a360 { void m(); };
extern T_func_0077a360 G1_func_0077a360;
void func_0077a360()
{
    G1_func_0077a360.m();
}
