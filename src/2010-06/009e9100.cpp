// roc 2010-06 009e9100  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9100
//
// 009e9100  b9c85fc200           mov ecx, 0xc25fc8
// 009e9105  e97687e9ff           jmp 0x881880
// auto-matched from its assembly shape

struct T_func_009e9100 { void m(); };
extern T_func_009e9100 G1_func_009e9100;
void func_009e9100()
{
    G1_func_009e9100.m();
}
