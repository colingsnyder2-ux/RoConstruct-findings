// roc 2008-06 007fe810  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe810
//
// 007fe810  b9587b9700           mov ecx, 0x977b58
// 007fe815  e9a6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe810 { void m(); };
extern T_func_007fe810 G1_func_007fe810;
void func_007fe810()
{
    G1_func_007fe810.m();
}
