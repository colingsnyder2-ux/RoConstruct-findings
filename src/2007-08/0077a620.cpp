// roc 2007-08 0077a620  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a620
//
// 0077a620  b9a0318c00           mov ecx, 0x8c31a0
// 0077a625  e996c6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a620 { void m(); };
extern T_func_0077a620 G1_func_0077a620;
void func_0077a620()
{
    G1_func_0077a620.m();
}
