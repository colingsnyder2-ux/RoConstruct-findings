// roc 2008-06 007d002e  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d002e
//
// 007d002e  b9b84c9700           mov ecx, 0x974cb8
// 007d0033  e9e83cdeff           jmp 0x5b3d20
// auto-matched from its assembly shape

struct T_func_007d002e { void m(); };
extern T_func_007d002e G1_func_007d002e;
void func_007d002e()
{
    G1_func_007d002e.m();
}
