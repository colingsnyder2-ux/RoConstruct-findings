// roc 2010-06 009e0ed0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0ed0
//
// 009e0ed0  b9d07bc100           mov ecx, 0xc17bd0
// 009e0ed5  e9160cbdff           jmp 0x5b1af0
// auto-matched from its assembly shape

struct T_func_009e0ed0 { void m(); };
extern T_func_009e0ed0 G1_func_009e0ed0;
void func_009e0ed0()
{
    G1_func_009e0ed0.m();
}
