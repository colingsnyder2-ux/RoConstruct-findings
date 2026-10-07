// roc 2010-06 009e5040  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5040
//
// 009e5040  b918d9c100           mov ecx, 0xc1d918
// 009e5045  e9f6f4c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e5040 { void m(); };
extern T_func_009e5040 G1_func_009e5040;
void func_009e5040()
{
    G1_func_009e5040.m();
}
