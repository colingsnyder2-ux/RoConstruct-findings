// roc 2010-06 009e5050  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5050
//
// 009e5050  b950d4c100           mov ecx, 0xc1d450
// 009e5055  e9e6f4c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e5050 { void m(); };
extern T_func_009e5050 G1_func_009e5050;
void func_009e5050()
{
    G1_func_009e5050.m();
}
