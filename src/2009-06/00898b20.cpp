// roc 2009-06 00898b20  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00898b20
//
// 00898b20  b94891a400           mov ecx, 0xa49148
// 00898b25  e9f63dd5ff           jmp 0x5ec920
// auto-matched from its assembly shape

struct T_func_00898b20 { void m(); };
extern T_func_00898b20 G1_func_00898b20;
void func_00898b20()
{
    G1_func_00898b20.m();
}
