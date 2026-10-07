// roc 2008-06 007fe470  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe470
//
// 007fe470  b960749700           mov ecx, 0x977460
// 007fe475  e946c7c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe470 { void m(); };
extern T_func_007fe470 G1_func_007fe470;
void func_007fe470()
{
    G1_func_007fe470.m();
}
