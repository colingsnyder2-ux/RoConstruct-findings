// roc 2010-06 009e9250  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9250
//
// 009e9250  b90cc4c200           mov ecx, 0xc2c40c
// 009e9255  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9250 { void m(); };
extern T_func_009e9250 G1_func_009e9250;
void func_009e9250()
{
    G1_func_009e9250.m();
}
