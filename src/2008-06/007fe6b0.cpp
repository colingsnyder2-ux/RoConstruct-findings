// roc 2008-06 007fe6b0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe6b0
//
// 007fe6b0  b9f0839700           mov ecx, 0x9783f0
// 007fe6b5  e906c5c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe6b0 { void m(); };
extern T_func_007fe6b0 G1_func_007fe6b0;
void func_007fe6b0()
{
    G1_func_007fe6b0.m();
}
