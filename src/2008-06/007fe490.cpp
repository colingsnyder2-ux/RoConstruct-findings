// roc 2008-06 007fe490  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe490
//
// 007fe490  b9d0729700           mov ecx, 0x9772d0
// 007fe495  e926c7c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe490 { void m(); };
extern T_func_007fe490 G1_func_007fe490;
void func_007fe490()
{
    G1_func_007fe490.m();
}
