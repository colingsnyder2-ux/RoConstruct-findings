// roc 2008-06 007fe700  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe700
//
// 007fe700  b908809700           mov ecx, 0x978008
// 007fe705  e9b6c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe700 { void m(); };
extern T_func_007fe700 G1_func_007fe700;
void func_007fe700()
{
    G1_func_007fe700.m();
}
