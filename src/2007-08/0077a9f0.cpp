// roc 2007-08 0077a9f0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a9f0
//
// 0077a9f0  b9d8488c00           mov ecx, 0x8c48d8
// 0077a9f5  e9c6c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a9f0 { void m(); };
extern T_func_0077a9f0 G1_func_0077a9f0;
void func_0077a9f0()
{
    G1_func_0077a9f0.m();
}
