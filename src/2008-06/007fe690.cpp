// roc 2008-06 007fe690  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe690
//
// 007fe690  b9b8849700           mov ecx, 0x9784b8
// 007fe695  e926c5c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe690 { void m(); };
extern T_func_007fe690 G1_func_007fe690;
void func_007fe690()
{
    G1_func_007fe690.m();
}
