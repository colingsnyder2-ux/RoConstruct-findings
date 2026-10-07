// roc 2008-06 007fe790  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe790
//
// 007fe790  b9588e9700           mov ecx, 0x978e58
// 007fe795  e926c4c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe790 { void m(); };
extern T_func_007fe790 G1_func_007fe790;
void func_007fe790()
{
    G1_func_007fe790.m();
}
