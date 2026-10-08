// roc 2007-08 0077a8d0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a8d0
//
// 0077a8d0  b9f8408c00           mov ecx, 0x8c40f8
// 0077a8d5  e9e6c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a8d0 { void m(); };
extern T_func_0077a8d0 G1_func_0077a8d0;
void func_0077a8d0()
{
    G1_func_0077a8d0.m();
}
