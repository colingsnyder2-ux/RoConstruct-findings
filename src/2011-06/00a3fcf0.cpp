// roc 2011-06 00a3fcf0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fcf0
//
// 00a3fcf0  b92c8fd100           mov ecx, 0xd18f2c
// 00a3fcf5  e91ad0f8ff           jmp 0x9ccd14
// auto-matched from its assembly shape

struct T_func_00a3fcf0 { void m(); };
extern T_func_00a3fcf0 G1_func_00a3fcf0;
void func_00a3fcf0()
{
    G1_func_00a3fcf0.m();
}
