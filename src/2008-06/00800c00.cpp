// roc 2008-06 00800c00  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800c00
//
// 00800c00  b950cc9700           mov ecx, 0x97cc50
// 00800c05  e9b69fc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800c00 { void m(); };
extern T_func_00800c00 G1_func_00800c00;
void func_00800c00()
{
    G1_func_00800c00.m();
}
