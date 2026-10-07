// roc 2008-06 00800880  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800880
//
// 00800880  b910c39700           mov ecx, 0x97c310
// 00800885  e936a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800880 { void m(); };
extern T_func_00800880 G1_func_00800880;
void func_00800880()
{
    G1_func_00800880.m();
}
