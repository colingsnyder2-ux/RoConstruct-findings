// roc 2008-06 007fe670  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe670
//
// 007fe670  b948869700           mov ecx, 0x978648
// 007fe675  e946c5c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe670 { void m(); };
extern T_func_007fe670 G1_func_007fe670;
void func_007fe670()
{
    G1_func_007fe670.m();
}
