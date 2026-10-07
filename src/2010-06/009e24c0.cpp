// roc 2010-06 009e24c0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e24c0
//
// 009e24c0  b9e88ac100           mov ecx, 0xc18ae8
// 009e24c5  e986edd0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e24c0 { void m(); };
extern T_func_009e24c0 G1_func_009e24c0;
void func_009e24c0()
{
    G1_func_009e24c0.m();
}
