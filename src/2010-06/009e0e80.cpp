// roc 2010-06 009e0e80  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e80
//
// 009e0e80  b98080c100           mov ecx, 0xc18080
// 009e0e85  e9661bbdff           jmp 0x5b29f0
// auto-matched from its assembly shape

struct T_func_009e0e80 { void m(); };
extern T_func_009e0e80 G1_func_009e0e80;
void func_009e0e80()
{
    G1_func_009e0e80.m();
}
