// roc 2008-06 007fd540  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd540
//
// 007fd540  b940509700           mov ecx, 0x975040
// 007fd545  e9965fcaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fd540 { void m(); };
extern T_func_007fd540 G1_func_007fd540;
void func_007fd540()
{
    G1_func_007fd540.m();
}
