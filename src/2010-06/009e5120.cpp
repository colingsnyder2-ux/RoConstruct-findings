// roc 2010-06 009e5120  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5120
//
// 009e5120  b9c8d2c100           mov ecx, 0xc1d2c8
// 009e5125  e916f4c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e5120 { void m(); };
extern T_func_009e5120 G1_func_009e5120;
void func_009e5120()
{
    G1_func_009e5120.m();
}
