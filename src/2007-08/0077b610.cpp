// roc 2007-08 0077b610  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b610
//
// 0077b610  b9105c8c00           mov ecx, 0x8c5c10
// 0077b615  e9f6bfc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077b610 { void m(); };
extern T_func_0077b610 G1_func_0077b610;
void func_0077b610()
{
    G1_func_0077b610.m();
}
