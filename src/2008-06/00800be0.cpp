// roc 2008-06 00800be0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800be0
//
// 00800be0  b9e0cd9700           mov ecx, 0x97cde0
// 00800be5  e9d69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800be0 { void m(); };
extern T_func_00800be0 G1_func_00800be0;
void func_00800be0()
{
    G1_func_00800be0.m();
}
