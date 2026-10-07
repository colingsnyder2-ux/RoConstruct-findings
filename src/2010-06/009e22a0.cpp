// roc 2010-06 009e22a0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e22a0
//
// 009e22a0  b9d88ec100           mov ecx, 0xc18ed8
// 009e22a5  e9c642bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e22a0 { void m(); };
extern T_func_009e22a0 G1_func_009e22a0;
void func_009e22a0()
{
    G1_func_009e22a0.m();
}
