// roc 2007-08 0077a9d0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a9d0
//
// 0077a9d0  b9f8498c00           mov ecx, 0x8c49f8
// 0077a9d5  e9e6c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a9d0 { void m(); };
extern T_func_0077a9d0 G1_func_0077a9d0;
void func_0077a9d0()
{
    G1_func_0077a9d0.m();
}
