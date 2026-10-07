// roc 2010-06 009e0ec0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ec0
//
// 009e0ec0  b9c07cc100           mov ecx, 0xc17cc0
// 009e0ec5  e9160fbdff           jmp 0x5b1de0
// auto-matched from its assembly shape

struct T_func_009e0ec0 { void m(); };
extern T_func_009e0ec0 G1_func_009e0ec0;
void func_009e0ec0()
{
    G1_func_009e0ec0.m();
}
