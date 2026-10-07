// roc 2008-06 007ffb70  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffb70
//
// 007ffb70  b958ac9700           mov ecx, 0x97ac58
// 007ffb75  e946b0c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007ffb70 { void m(); };
extern T_func_007ffb70 G1_func_007ffb70;
void func_007ffb70()
{
    G1_func_007ffb70.m();
}
