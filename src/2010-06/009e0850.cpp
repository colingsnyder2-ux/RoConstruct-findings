// roc 2010-06 009e0850  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0850
//
// 009e0850  b99024c100           mov ecx, 0xc12490
// 009e0855  e9269da2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0850 { void m(); };
extern T_func_009e0850 G1_func_009e0850;
void func_009e0850()
{
    G1_func_009e0850.m();
}
